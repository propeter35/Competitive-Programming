/* 
	Author : propeter35
	Date : 3/9/2021
*/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	// if odd raze wins = 1;
	// if even breach wins = 2;
	bool answer = false;
	if(n % 2 == 0) {
		answer = true;
		for(int i = 1; i < n; i += 2) {
			if((s[i] - '0') % 2 == 0) {
				answer = false;
			}
		}
	} else {
		for(int i = 0; i < n; i += 2) {
			if((s[i] - '0') % 2 == 1) {
				answer = true;
			}
		}
	}
	if(answer) {
		cout << 1 << endl;
	} else {
		cout << 2 << endl;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long test;
	
	cin >> test;
	
	//~ test = 1;
	
	while(test--) {
		run_case();
	}
}

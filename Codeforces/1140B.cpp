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
	int opt1 = 0, opt2 = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '>') break;
		opt1++;
	}
	for(int i = n - 1; i >= 0; i--) {
		if(s[i] == '<') break;
		opt2++;
	}
	cout << min(opt1, opt2) << endl;
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

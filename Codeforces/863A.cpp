/* 
	Author : propeter35
	Date : 3/5/2021
*/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	string s, t;
	cin >> s;
	while(s.back() == '0') {
		s.pop_back();
	}
	t = s;
	reverse(s.begin(), s.end());
	if(t == s) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long test;
	
	//~ cin >> test;
	
	test = 1;
	
	while(test--) {
		run_case();
	}
}

/* 
	Author : propeter35
	Date : 3/6/2021
*/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int c, m, x;
	cin >> c >> m >> x;
	cout << min({c, m, (c + m + x) / 3}) << endl;
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

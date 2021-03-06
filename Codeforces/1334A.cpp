/* 
	Author : propeter35
	Date : 3/6/2021
*/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int p = 0, c = 0;
	bool answer = true;
	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if(x < p || y < c || y - c > x - p) {
			answer = false;
		}
		p = x, c = y;
	}
	cout << (answer ? "YES" : "NO") << endl;
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

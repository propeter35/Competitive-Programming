/* 
	Author : propeter35
	Date : 3/7/2021
*/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int n;
	cin >> n;
	long long sum = 0;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		sum += x;
	}
	vector<int> b(n);
	for(int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(b.begin(), b.end());
	if(sum <= b[n - 1] + b[n - 2]) {
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

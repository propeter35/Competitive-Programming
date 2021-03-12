/* 
	Author : propeter35
	Date : 3/11/2021
*/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int answer = 0;
	int c = 0;
	for(int i = 0; i < n; i++) {
		while(c < n && a[c] - a[i] <= 5) {
			c++;
			answer = max(answer, c - i);
		}
	}
	cout << answer << endl;
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

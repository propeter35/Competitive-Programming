/* 
	Author : propeter35
	Date : 2/25/2021
*/
 
#include <bits/stdc++.h>
using namespace std;
 
void run_case() {
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	int odd = 0;
	for(int i = 0; i < n; i++) {
		int l;
		cin >> l;
		if(l % 2 == 1) {
			odd++;
		}
	}
	if((x == 1 && odd == 0) || (x == n && odd % 2 == 0) || odd == 0 || (odd == n && x % 2 == 0)) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
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

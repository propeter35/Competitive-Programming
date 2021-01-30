/* 
	Author : propeter35
	Date : 1/30/2021
*/
 
#include <bits/stdc++.h>
using namespace std;
 
void run_case() {
	long long n, m;
	cin >> n >> m;
	long long p = pow(2, n);
	cout << m % p << endl;
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

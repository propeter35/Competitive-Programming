/* 
	Author : propeter35
	Date : 2/1/2021
*/
 
#include <bits/stdc++.h>
using namespace std;
 
void run_case() {
	string s;
	cin >> s;
	// "Danil", "Olya", "Slava", "Ann" and "Nikita"
	int answer = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == 'D' && s[i + 1] == 'a' && s[i + 2] == 'n' && s[i + 3] == 'i' && s[i + 4] == 'l') {
			answer++;
		}
		if(s[i] == 'O' && s[i + 1] == 'l' && s[i + 2] == 'y' && s[i + 3] == 'a') {
			answer++;
		}
		if(s[i] == 'S' && s[i + 1] == 'l' && s[i + 2] == 'a' && s[i + 3] == 'v' && s[i + 4] == 'a') {
			answer++;
		}
		if(s[i] == 'A' && s[i + 1] == 'n' && s[i + 2] == 'n') {
			answer++;
		}
		if(s[i] == 'N' && s[i + 1] == 'i' && s[i + 2] == 'k' && s[i + 3] == 'i' && s[i + 4] == 't' && s[i + 5] == 'a') {
			answer++;
		}
	}
	if(answer == 1) {
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

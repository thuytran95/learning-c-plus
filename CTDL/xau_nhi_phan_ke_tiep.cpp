#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	
	int i = s.length();
	while(i--){
		if(s[i] == '0'){
			s[i] = '1';
			break;
		} else {
			s[i] = '0';
		}
	}
	
	cout << s << endl;
	
}

int main (){
	solve();
	
	return 0;
}

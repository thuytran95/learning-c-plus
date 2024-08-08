#include <bits/stdc++.h>
using namespace std;

void solve (){
	long long a;
	string s;
	cin >> a >> s;
	
	long long mod = 0;
	
	for(int i =0; i < s.length(); i++){
		mod = (mod * 10 + (s[i] -'0')) % a;
	}
	
	cout << __gcd(a, mod) << endl;
}

int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
	
	return 0;
}

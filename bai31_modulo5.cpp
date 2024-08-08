#include <bits/stdc++.h>
using namespace std;

void solve (){
	string n;
	long long m;
	
	long long mod;
	for(int i = 0; i < n.length(); i++){
		mod = (mod * 10 + n[i] - '0') % m;
	}
	
	cout << mod << endl;
}

int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
	
	return 0;
}

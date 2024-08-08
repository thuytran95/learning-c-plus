#include <bits/stdc++.h>
using namespace std;

void solve(){
	int x, y, p;
	cin >> x >> y >> p;
	
	long long mod = 1;
	/*
	chia lay mod moi lan duyet se lam giam do lon cua phep tinh
	*/
	for(int i = 1; i <= y; i++){
		mod = mod * x % p;	
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

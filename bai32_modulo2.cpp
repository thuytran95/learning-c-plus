#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	long long b, m;
	cin >> a >> b >> m;
	
	long long mod = 0;
	
	for(int i = 0; i < a.length(); i++){
		mod = (mod * 10 + a[i]- '0') % m;
	}
	
	long long res = 1;
	for(int i = 1; i <= b; i++){
		res = (res * mod) % m;
	}
	
	cout << res << endl;
	
}

int main (){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}

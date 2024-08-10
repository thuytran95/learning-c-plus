#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

void solve (){
	int n;
	cin >> n;
	
	long long f0 = 0, f1= 1, fn = 1;
	
	while(f0 + f1 <=  n){
		fn = f0+ f1;
		f0 = f1;
		f1 = fn;
	}
	
	if(fn == n || n ==0){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main (){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}

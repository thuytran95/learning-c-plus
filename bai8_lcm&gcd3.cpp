#include <bits/stdc++.h>
#define MAX 100
using namespace std;

const int mod = 1e9+7;


void solve (){
	int n;
	long long a[MAX];
	
	cin >> n;
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
	
	long long resGCD = a[0];
	long long tich  = 1;

	for(int i = 0; i < n ; i++){
		resGCD = __gcd(resGCD, a[i]);
		tich = (tich * a[i]) % mod;		
	}
	
	long long res = 1;
	for(int i = 0; i < resGCD; i++){
		res = (res * tich) % mod;
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

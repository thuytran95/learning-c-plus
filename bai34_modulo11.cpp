#include <bits/stdc++.h>
using namespace std;

/*
Tinh chat: (a * b ) mod m =[(a mod m ) * (b mod m)] mod m
*/

void solve (){
	long long a, b, c;
	cin >> a >> b >> c;
	
	long long mod =  a % c;
	long long mod2 = b % c;
	long long res = (mod * mod2) % c;
	
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

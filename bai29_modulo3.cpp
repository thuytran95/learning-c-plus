#include <bits/stdc++.h>
using namespace std;


void solve (){
	long long n, k;
	cin >> n >> k;
	
	long long res = 0;
	for(int i = 1; i <= n; i++){
			res += i % k;
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

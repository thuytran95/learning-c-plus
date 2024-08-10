#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

void solve (){
	int n;
	cin >> n;
	
	vector<int> a;
	a.push_back(0);
	a.push_back(1);
	for(int i = 2; i <= n; i++){
		a.push_back((a[i - 1] + a[i - 2]) % MOD);
	}
	
	cout << a[n] << endl;		
}

int main (){
	int t;
	
	cin >> t;
	while(t--){
		solve();
	}
	
	
	return 0;
}

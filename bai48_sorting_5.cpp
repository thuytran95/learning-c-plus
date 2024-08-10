#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

void solve (){
	int n, m, a[N], b[N], dp[N] = {0};
	cin >> n >> m;

	for(int i = 0; i < n; i++){
		cin >> a[i];
		dp[a[i]]++;
	}
	
	for(int i = 0; i < m; i++){
		cin >> b[i];
		dp[b[i]]++;
	}
	
	for(int i = 0; i <=10000; i++){
		if(dp[i] == 1 || dp[i] == 2){
			cout << i << " ";
		}
	}
	
	cout << endl;
	
	for(int i = 0; i <=10000; i++){
		if(dp[i] == 2){
			cout << i << " ";
		}
	}
	
	cout << endl;
	

}


int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
	
	
	
	return 0;
}

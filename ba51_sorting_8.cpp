#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

void solve(){
	int n, m, x[N], y[N];
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		cin >> x[i];
	}
	
	for(int i = 0; i < m; i++){
		cin >> y[i];
	}
	
	int count = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(x[i] > y[j]){
				count++;
			}
		}
	}
	
	cout << count << endl;
}

int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
	
	return 0;
}

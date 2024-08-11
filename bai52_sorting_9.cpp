#include <bits/stdc++.h>
using namespace std;
int const MAX = 1e3+5;

void solve(){
	int n,k, a[MAX];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = i+ 1; j < n; j++){
			if(a[j] = k - a[i]){
				cnt++;
			}
		}
	}
	
	cout << cnt << endl;
}

int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
	return 0;
}

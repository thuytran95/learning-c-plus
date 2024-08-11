#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int a[N];

void solve (){
	int n, k;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int cnt = 0;	
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(abs(a[i] - a[j]) < k){
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

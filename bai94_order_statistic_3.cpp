#include <bits/stdc++.h>
using namespace std;

void solve (){
	int n, k;
	cin >> n >> k;
	
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	sort(a,  a + n * n);
	cout << a[k -1] << endl;	
}

int main (){
	int t;
	while(t--){
		solve();
	}
	
	return 0;
}

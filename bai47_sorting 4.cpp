#include <bits/stdc++.h>
using namespace std;
#define MAX 10005

/*
Dynamic programming
Dem so lan xuat hienj cua cac phan tu 
xuat hien = 1 or 2 => hop cua 2 mang
xuat hien = 1 => giao cua 2 mang
**/

void solve(){
	int n, m;
	int a[MAX], b[MAX];
	int dp[MAX]={0};
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		dp[a[i]]++;
	}
	
	for(int j = 0; j < m; j++){
		cin >> b[j];
		dp[b[j]]++;
	}
	
	for(int i = 0; i <= 100000; i++){
		if(dp[i] == 1 || dp[i] == 2){
			cout << i << " ";
		}
	}
	cout << endl;
	
	for(int i = 0; i <= 100000; i++){
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

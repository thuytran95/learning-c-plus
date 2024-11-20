#include <bits/stdc++.h>
using namespace std;
/*
6 3
7 10 4 3 20 15
*/

void solve (){
	int n, k;
	cin >> n >> k;
	
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a, a + n);
	cout << a[k - 1] << endl;	
}

int main (){
	int t;
	cin >> t;
	
	while(t--){		
	solve();	
	}
	
	return 0;
}

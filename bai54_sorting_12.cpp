#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int a[N], b[N];

void solve(){
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	
	sort(a, a + n);
	sort(b, b + m);
		
	cout << (long)a[n-1] * b[0];
	
}

int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
	
	return 0;
}

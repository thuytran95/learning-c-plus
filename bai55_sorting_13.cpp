#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int a[N], b[N];

void out (int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void solve(){
	int n, m;
	cin >> n >> m;
	
	int length = n + m;
	for(int i = 0; i < length; i++){
		cin >> a[i];
	}
	
	sort(a, a + length);
	out(a, length);	
}


int main (){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+5;

/*
Dem so luong hien co cua mang
so phan tu can thiet range = max - min + 1;
neu n < so phan tu can thiet => can them vao = range - n
*/

void solve(){
	int n;
	int a[N];
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a, a + n);
	
	int diff = a[n - 1] - a[0];
	int range = diff + 1;
	if(n == range) {
		cout << 0 << endl;
	} else {
		cout << range - n << endl;
	}
	
}

int main (){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}

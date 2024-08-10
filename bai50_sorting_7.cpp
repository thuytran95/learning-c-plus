#include <bits/stdc++.h>
using namespace std;
int const MAX = 1e6+5;
int a[MAX], b[MAX];

void out(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void solve(){
	int n;
	cin >> n;

	for(int i = 0 ; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	
	out(a, n);
	sort(a, a + n);
	
	for(int i = 0; i < n; i++){
		if(a[i] != b[i]){
			cout << i + 1 << " ";
			break;
		}
	}
	
	
	for(int i = n - 1; i >= 0; i--){
		if(a[i] != b[i]){
			cout << i + 1 << " ";
			break;
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

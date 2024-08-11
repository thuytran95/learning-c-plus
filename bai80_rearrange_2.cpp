#include <bits/stdc++.h>
using namespace std;
/*
7
6 2 0 0 0 3 6
*/

bool compare (long long a, long long b){
	if(a != 0 && b != 0) return 0;
	if(a == 0) return -1;
	if(b == 0) return -1;
	return -1;
}

void out (long long a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void solve(){
	int n;
	cin >> n;
	
	long long a[n];
	long long b[n];
	int count = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i]!= 0){
			b[count++] = a[i];
		}
		
	}
	
	for(int i = 0; i < count; i++){
		cout << b[i] << " ";
	}
	
	for(int i = 0; i < n- count;i++){
		cout << 0 << " ";
	}
	
	cout << endl;
	
}

int main(){
	solve();
	
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void out (int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void solve(){
	int n, x;
	int a[MAX];
	int diff[MAX];
	cin >> n >> x;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++){
		diff[i] = abs(a[i] - x);
	}
	
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n ; j++){
			if(diff[i] > diff[j]){
				swap(diff[i], diff[j]);
				swap(a[i], a[j]);
			}
		}
	}
	
	out(a, n);	
}

int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
}

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

void bubbleSort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void out (int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	
	cout << endl;
}

void solve (){
	int n;
	int a[MAX];
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	bubbleSort(a, n);	
	int left = 0, right = n - 1;
	int mid = n / 2;
	
	for(int i = 0; i < mid; i++){
		cout << a[n - 1 - i] << " " << a[i] << " ";
	}
	
	// for case n le vi tri chinh giua
	if(n % 2 != 0){
		cout << a[mid];
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

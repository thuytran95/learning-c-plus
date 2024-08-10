#include <bits/stdc++.h>
using namespace std;
#define MAX 25

/*
Thuat toan sinh xau nhi phan
**/

int a[MAX];
int n;

void printOutput(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void Try (int i){
	for(int j = 0; j <=1; j++){
		a[i] = j;
		if(i == n - 1) {
			printOutput(a, n);
		} else{
			Try(i + 1);
		}
	}
}

void solve (){
	cin >> n;
	Try(0);
		
}

int main (){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(0);		
	}
	
	
	
	return 0;
}

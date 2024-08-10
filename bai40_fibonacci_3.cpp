#include <bits/stdc++.h>
using namespace std;
#define MAX 105

/*
https://www.geeksforgeeks.org/check-number-fibonacci-number/
Check fibonacci 2nd approach
A number is Fibonacci if and only if one or both of (5*n2 + 4) or (5*n2 – 4) is a perfect square
*/


int isSquare(int n){
	long long square = sqrt(n);
	return square * square == n;
}

int isFibonacci(int n){
	if(n == 0 || n == 1) return 1;
	long long res = 5 * n * n;
	return isSquare(res - 4) || isSquare(res + 4);
}

void solve (){
	int n;
	int a[MAX];
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++){
		if(isFibonacci(a[i])){
			cout << a[i] << " ";
		}
	}
	
	cout << endl;	
}

int main(){
	int t;
	cin >> t;
	
	while(t--){	
		solve();
	}
	
	return 0;
}

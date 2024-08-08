#include <bits/stdc++.h>
#define MAX 100

using namespace std;

/*
Notes: khong bao gom diem do
Input: A[] = {-7, 1, 5, 2, -4, 3, 0} 
Output: 3 
3 is an equilibrium index, because:
A[0] + A[1] + A[2] = A[4] + A[5] + A[6]
Input: A[] = {1, 2, 3} 
Output: -1 
*/

void checkdiemcanbang(long long a[], int n){
	int res = -1;
	for(int i = 1; i < n; i++){
		a[i] += a[i - 1]; // so hang i = so hang [i-1] + chinh no
	}
	
	for(int i = 0; i < n - 1; i++){
		/*	
		a[n-1] tong tat ca cac so
		so sanh gia tri a[i] = a[n-1] - a[i] => diem can bang				
		*/
		if(a[i - 1] == a[n - 1] - a[i]){ 
			cout << "ket qua" << a[i-1] << endl;
			res = i + 1;
			break;
		}
	}
	
	cout << res << endl;	
}


int main () {
	int t, n;
	cin >> t;
	long long a[MAX];
	
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}		
		checkBalancePoint(a, n);
		
	}
	
	return 0;
}

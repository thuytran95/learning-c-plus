#include <bits/stdc++.h>
using namespace std;

/*
5 3
2 1 5 6 3

7 5
2 7 9 5 8 7 4
*/


void solve (){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	
	// count element that less than or equal k
	int total_good_numbers = 0, bad_numbers = 0;
	
	for(int i = 0; i < n; i++){
		if(a[i] <= k){
			total_good_numbers++;
		}
	}
	
	for(int i = 0; i < total_good_numbers; i++){
		if(a[i] > k){
			bad_numbers++;
		}
	}
	
	int swap = bad_numbers;
	for(int l = 0, r = total_good_numbers; l < n, r < n; l++, r++){
		// if the r pointer a[r] > k => increment bad_numbers
		if(a[r] > k) bad_numbers++;
		// remove bad_numbers if a[l] = 0 because want to keep equal to the size window (total_good_numbers)
		if(a[l] > k) bad_numbers--;	
		swap = min(swap, bad_numbers);
	}
	
	cout << swap << endl;	
}

int main (){	
	solve();
	
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

/*
2
8
2 3 2 4 4 6 3 2
0 2
8
2 3 2 4 4 6 3 2
1 3

*/

bool isMountain (int a[], int left, int right){
	int mark = 0;
	
	if(a[left] > a[left + 1]){
		return false;
	}
	
	
	for(int i = left; i < right; i++){
		if(a[i] <= a[i + 1]){
			mark = 1;
		}
		
		if(mark == 1){
			for(int j = right; j > i + 1; j--){
				if(a[j] > a[j - 1]){
					return false;
				}
			}
			
			return true;
		}	
	}
		
	return mark == 1;
}

void solve (){
	int n, left, right;
	cin >> n;
	
	
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	cin >> left >> right;

	if( isMountain(a, left, right)){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

void solve2 (){
		int n, left, right;
	cin >> n;
	
	
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	cin >> left >> right;
	
	
	
	/*
	if array a is montain, i should increase to r
	*/
	int cnt = 1;
	while(a[i] < a[i + 1] && i < r){
		i++;
	}
	
	
	while(a[i] > a[i + 1] && i < r){
		i++;
	}
	
	
	if(i == r){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

}

int main (){
	solve();
	
	
	return 0;
}

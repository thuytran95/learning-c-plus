#include <bits/stdc++.h>
using namespace std;

/*
6 51
1 4 45 6 0 19
*/

/*
Create 2 pointer
end pointer: count max element that less than or equal to x
start pointer: narrow down elements that has sum greater than x
*/


void solve (){
	int n, x;
	cin >> n >> x;
	
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int minLength = n + 1;
	int start = 0, end = 0;
	long long sum= 0;
	while(end < n){
		// Keep the array element while sum is less than x
		while(sum <= x && end < n){
			sum += a[end];
			end++;
		}
		
		// current sum is greate than x
		while(sum > x  && start < n){
			int temp = end - start;
			// update minimun minLength if need
			if(end - start < minLength){
				minLength = end - start;
			}
			
			// remove starting elemnt
			sum -= a[start];
			start++;
		}
	}
	
	if(minLength == n + 1) {
		cout << -1 << end;
	} else {
		cout << minLength << endl;
	}	
}

int main (){
	solve();
	
	return 0;
}

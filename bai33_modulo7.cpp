#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;

/*
https://www.geeksforgeeks.org/finding-k-modulus-array-element/?ref=header_outind
Suppose the array contains only two elements a and b (b>a). 
vi can tim 2 phan so k de a % k = b % k
So we can write b = a + d where d is a positive integer and ‘k’ be a number such that b%k = a%k. 
(a + d)%k = a%k
a%k + d%k = a%k 
d%k = 0
*/

void solve(){
	int n;
	int a[N];
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a, a + n);
	int d = a[n-1] - a[0];
	if(d == 0){
		cout << 1 << endl;
		return;
	} 
	
	//find all divisor of d because i <= d/i 
	// so need to remove redundant check so i * i <=d 
	vector <int> k;
	for(int i = 1; i * i <= d; i++){
		if(d % i == 0){
			k.push_back(i);
			
			if(i != d / i){
				k.push_back(d / i);
			}
		}
	}
	
	
	// find all k's
	int cnt = 0;
	for(int i = 0; i < k.size(); i++){
		int temp = a[0] % k[i];
		
		int j;
		for(j = 1; j < n; j++){
			if(a[j] % k[i] != temp){
				break;
			}
		}
		
		if(j == n){
			cnt++;
		}
	}
	
	cout << cnt <<  endl;
}



int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
	
	
	return 0;
}

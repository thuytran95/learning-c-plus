#include <bits/stdc++.h>
using namespace std;

void solve (){
	int n, k;
	cin >> n >> k;
	
	int count = 0;
	int lastPrime = 1;
	
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			count++;
			n /= i;
			
			if(count == k) {
				cout << i << endl;
				return;
			}
		}	
	}
	

	// truong hop n la so ngto or so tiep theo > sqt(n)
	if(n > 1) {
		count++;
	}
	
	if(count == k){
		cout << n << endl;
	} else {
		cout << -1 << endl;
	}
}


void solveWithVector(){
	int n, k;
	cin >> n >> k;
	vector <int> a;
	
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			a.push_back(i);
		}
		
		while( n % i == 0){
			a.push_back(i);
			n /= i;
		} 
	}
	
	if(n > 1) a.push_back(n);
	if(a.size() < k){
		cout << -1 << endl;
	} else {
		cout << a[k - 1] << endl;
	}
}



int main (){
	solveWithVector();
	
	return 0;
}

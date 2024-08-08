#include <bits/stdc++.h>
using namespace std;
/*
Find the prime in range
*/

int isPrime (long long n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){ 
		if(n % i == 0) return 0; // khong co so nao chia het dk
	}
	return 1;
}

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int a, b;
	cin >> a >> b;
	
	// swap sap xep tang dan
	if(a > b){
		swap(a, b);
	}
		
	for(int i = a; i <=b ; i++){
		if(isPrime(i) == 1) cout << i << "\t";
	}
	
	cout << endl;	
	return 0;
}



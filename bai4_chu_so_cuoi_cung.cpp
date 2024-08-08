#include <bits/stdc++.h>
using namespace std;


long long lastSum(long long n){
	if(n <= 9) return n;
	long long sum = 0;
	
	while ( n > 0){
		sum += n % 10;
		n /= 10;
	}
	
	n = sum;
	/*
	Dung de quy vi sau moi lan goi lai tiep tuc lap lai
	
	*/	
	return lastSum(n);
}

int main (){
	int t;
	long long n;
	cin >> t;
	
	while(t--){
		cin >> n;
		cout << lastSum(n) << endl;
	}
	
	return 0;
}

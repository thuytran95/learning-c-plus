#include <iostream>
#include <math.h>
const int N = 1e4+5;
int prime[N];
using namespace std;


void sieve (){
	prime[0] = prime[1] = 1;
	
	for(int i = 2; i <= sqrt(N); i++){
			if(prime[i]== 0){
				for(int j = i * i; j < N; j+=i){
					prime[j] = 1;
				}
			}
	}
}


void solve (){
	int n;
	cin >> n;
	
	/*
	So co 3 uoc so la 1, so ngto binh phuong
	Vd 25 49 81....
	*/
	for(int i = 0; i <= sqrt(n); i++){
		if(prime[i] == 0){
			cout << i * i << " ";
		}
	}
	
	cout << endl;
}

int main (){
	int t;
	cin >> t;
	
	sieve();
	
	while(t--){
		solve();
	}
	
	return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

void solve (){
	int n;
	cin >> n;
	
	for(int i = 2; i <= sqrt(n); i++){
		int isCheck = 0;
		while(n % i == 0){
			if(!isCheck){
				isCheck = 1;
				cout << i << " ";
			}
			n /= i;
		}
	}
	
	if(n > 1) cout << n;
	cout << endl;	
}

int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
	
	return 0;
}

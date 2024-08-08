#include <bits/stdc++.h>
using namespace std;

long long uochunglonnhat(long long a, long long b){
	if(a == 0 || b == 0) return a + b;
	while(a != b){
		if(a > b){
			a -=b;
		} else {
			b -=a;
		}
	}
	
	return a;
	
}


long long boichungnhonhat(long long a, long long b){
	if(a == 0 || b == 0) return 0;
	return a * b / uochunglonnhat(a, b);
}

int main (){
	cout <<	uochunglonnhat(30,6) << endl;
	cout << boichungnhonhat(30,6);
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
/*
Thuat toan sinh to hop
*/

int a[20];
int n, k;

void printout (){
	for(int i = 1; i <=k; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		
		a[i] = j;
		if(i == k){ 
			printout();
		} else {
			Try(i + 1);
		}
	}
}

int main (){
	cin >> n;
	cin >> k;
	
	Try(1);
	
	
	
	return 0;
}

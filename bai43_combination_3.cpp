#include <bits/stdc++.h>
using namespace std;
int n;
int a[25];
int unused[25] = {0};

void out (){
	for (int i = 1; i <=n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void Try(int i){
	if(i == n + 1) {
		out();
		return;
	}
	
	for(int j = 1; j <= n; j++){
	
		if(unused[j] == 0){
			a[i] = j;
			unused[j] = 1;
				
			if(i == n){
				out();
			} else {
				Try(i + 1);			
			}
			
			unused[j] = 0;	
		}
		
	
	
	}
}

int main (){
	cin >> n;
	Try(1);
	
	
	
	return 0;
}

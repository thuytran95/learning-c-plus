#include <bits/stdc++.h>
#define MAX 100
using namespace std;

/*
Input: 
4
1 2 3 0
5 3 7 2
9 2 3 12
13 3 2 16 
*/

struct data {
	int value, rowIndex;
};

bool compare (data a, data b){
	return a.value < b.value;
}


void out (data mat[][MAX], int n){
	for(int i = 0; i < n * n; i++){
		cout << mat[i / n][i % n].value << " ";
		if((i + 1) % n == 0){
			cout << endl;
		}
	}
}

void outArr(data b[], int n){
	for(int i = 0; i < n; i++){
		cout << b[i].value << " ";	
	}
	cout << endl;
}

void solve (){
	int n;
	data mat[MAX][MAX];
	cin >> n;
	
	int length = n * n;
	data b[length];
	int startIndex = 0;
	for(int i= 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> mat[i][j].value;
			mat[i][j].rowIndex = i;
			b[startIndex] = mat[i][j];
			startIndex++;
		}
	}
	
	
	sort(b, b + length, compare);	
	int countExistAllRow = 0;
	for(int i = 0; i < length - 1; i++){
		int cnt = 1;
		for(int j = i + 1; j < length; j++){
			if(b[i].value == b[j].value && b[i].rowIndex != b[j].rowIndex){
				cnt++;
			}					
		}
		
			if(cnt == n){
				countExistAllRow++;
				// giam bot so lan duyet qua cac phan tu giong nhau
				// tru di 1 dv vi vong lap sau do + 1 => -1 de tinh dung gia tri
				i = i + n - 1; 
			}
	}
	
	cout << countExistAllRow << endl;
	
}

int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
	
	return 0;
}

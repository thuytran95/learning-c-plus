#include <bits/stdc++.h>
using namespace std;

/*
2
7
2 3 10 6 4 8 1
3
3 2 1
*/


struct Element{
	int value, position;
};

bool cmp (Element a, Element b){
	return a.value > b.value;
}

void solve (){
	int n;
	cin >> n;
	
	Element a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].value;
		a[i].position = i;
	}
	
	
	sort(a, a + n, cmp);
	
	int res = -1;
	for(int i = 0; i < n; i++){
		int find = 0;
		for(int j = n - 1; j > 0; j--){
			if(a[i].position > a[j].position){
				res = max(res,  a[i].value - a[j].value);
				find = 1;				
			}
			
			if(find) break;
		}
	}
	
	cout << res << endl;	
}


void solve2(){
	int n;
	cin >> n;
	
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int res  = -1;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				res = max(res, a[j] - a[i]);
			}
		}
	}
	
	cout << res << endl;
	
	
}

int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
	
	
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

struct Element{
	int value;
	int position;
};

void out (vector <Element> a){
	for(int i = 0; i < a.size(); i++){
		cout << a[i].value << " ";
	}
	
	cout << endl;
}

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

bool compare(Element a, Element b){
	return a.value <= b.value;
}

void solve(){
	int n;
	cin >> n;
	vector<Element>a(n);
	
	for(int i = 0; i < n; i++){
		cin >> a[i].value;
		a[i].position = i;
	}
	
	sort(a.begin(), a.end(), compare);
	
	int count = 0;
	for(int i = 0; i < n - 1; i++){
		while(a[i].position != i){
			swap(a[i], a[a[i].position]);
			count++;
		}
	}
	
	cout << count << endl;	
}

int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
	
	return 0;
}

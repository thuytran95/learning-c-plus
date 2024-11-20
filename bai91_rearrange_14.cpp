#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	
	int i = s.length() - 1;
	while(s[i] >= s[i - 1] && i > 0){
		i--;
	}
	
	if(i == 0){
		cout << -1 << endl;
		return;
	}
	
	
	int mark = i;
	for(int j = i; j < s.length(); j++){
		if(s[j] < s[ i - 1] && s[mark] < s[j]){
			mark = j;
		}
	}
	
	swap(s[i- 1], s[mark]);
	cout << s << endl;
	
}

int main (){
	solve();
	
	return 0;
}

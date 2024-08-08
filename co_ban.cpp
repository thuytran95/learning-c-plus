#include <iostream>
#include <string>
using namespace std;


string toLowerCase (string s) {
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	return s;
}

void toLowerCase2 (string &s){
	for(int i = 0; i< s.length(); i ++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
}

int main (){
	string s1, s2;	
	cin >> s1;	// hello world
	cout << s1; // hello
	getline(cin, s2); //hello world
	cout << s2 << endl; // hello world
	//endl: xuong dong thay cho \n
	
	
	
	string concatStr;
	//	concatStr = "a" + "b"; // error
	concatStr = s1 + s2;
	cout << "Truoc: " << concatStr << endl;
	
	string lower = toLowerCase(concatStr);
	cout << "Sau: " << lower << endl;
	
	string concatStr2 = concatStr;
	toLowerCase2(concatStr2);
	cout << "Sau 2: " << concatStr2  << endl;
	
	return 0;
}

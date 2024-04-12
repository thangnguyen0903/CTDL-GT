#include<bits/stdc++.h>
using namespace std;

void thay(string s, int i){
	if(i == s.size()){
		cout << s << endl;
		return;
	}
	if(s[i] == '?'){
		s[i] = '0';
		thay(s, i + 1);
		s[i] = '1';
		thay(s, i + 1);
		s[i] = '?';
	}
	else{
		thay(s, i + 1);
	}
}

int main(){
	int t; 
	cin >> t;
	cin.ignore();
	string s;
	while(t--){
		getline(cin, s);
		thay(s, 0);
	}
	return 0;
}

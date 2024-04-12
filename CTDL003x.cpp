#include<bits/stdc++.h>
using namespace std;

string nextBS(const string& s){
	string result = s;
	
	int i = result.length() - 1;
	while(i >= 0 && result[i] == '1'){
		i--;
	}
	
	if(i == -1){
		return string(result.length(), '0');
	}
	
	result[i] = '1';
	
	for( int j = i + 1; j < result.length(); j++){
		result[j] = '0';
	}
	
	return result;
}

int main(){
	int t; 
	cin >> t;  
	while(t--){
	string s;
	cin >> s;
	cout << nextBS(s) << endl;
	}
	return 0;
}

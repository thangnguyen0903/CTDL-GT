#include<bits/stdc++.h>
using namespace std;

void ABs(int n, string s = ""){
	if(s.size() == n){
		cout << s << " ";
		return;
	}
	ABs(n, s + 'A');
	ABs(n, s + 'B');
}
 int main(){
 	int t; 
 	cin >> t;
 	while(t--){
 		int n;
 		cin >> n;
 		ABs(n);
 		cout << endl;
	 }
	 return 0;
 }

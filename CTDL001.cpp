#include <bits/stdc++.h>
using namespace std;

void generateBS(int n){
	for(int i = 0; i < (1<<n); i++){
		for(int j = n - 1; j >=0; j--){
			cout << ((i >>j) & 1) << " ";
		}
		cout << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		generateBS(n);
	}
	return 0;
}

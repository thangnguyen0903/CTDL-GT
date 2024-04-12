#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;




int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        
        string s; getline(cin, s);
        
        stringstream ss(s);
        
        string tmp = "";
        
        while(getline(ss, tmp, ' '))
        {
        	reverse(tmp.begin(), tmp.end());
        	cout << tmp << ' ';
		}
		
		
		cout << endl;
        
        
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;





int main() {
    
    int t; cin >> t;
    while(t--)
    {
    	
    	string s; cin >> s;
    	
    	string a = "";
    	
    	a += s[0];
    	
    	for(int i = 1; i < s.size(); i++)
    	{
    		if(s[i - 1] == s[i]) a += '0';
    		else a += '1';
		}
    	
	
    	cout << a << endl;
    	
    	
	}
    
    
    
    return 0;
}

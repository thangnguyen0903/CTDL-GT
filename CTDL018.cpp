#include<bits/stdc++.h>
using namespace std;


int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<vector<int>> v(n);
        int a[n];
        for(int i = 0; i < n; i++)
        {
        	cin >> a[i];
        	
        	v[0].push_back(a[i]);
        	
		}
        
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < (int)v[i].size() - 1; j ++)
			{
				v[i + 1].push_back(v[i][j] + v[i][j + 1]);
			}
		}
		
		for(auto x : v)
		{
			cout << '[';
			for(int i = 0; i < (int)x.size(); i++)
			{
				cout << x[i];
				if(i != (int)x.size() - 1) cout << ' ';
			}
			cout << ']';
			cout << endl;
			
		}
        
    }
    return 0;
}

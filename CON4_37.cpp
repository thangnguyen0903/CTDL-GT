#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main() {
    int t; cin >> t;
    while(t--)
    {
        ll n, x, res = 0;
        
        int vt = -1;
        
        cin >> n >> x;
        
        vector<ll> a(n);
        
        for(int i = 0; i < n; i++)
        {
        	cin >> a[i];
		}
        
        sort(a.begin(), a.end());
        
        for(int i = 0; i < n; i++)
        {
        	
        	if(a[i] <= x)
        	{

        			vt = i;
				
			}
		}
        
        
		if(vt == -1) cout << vt;
		else cout << vt + 1;
		
		cout << endl;
        
    }
    return 0;
}

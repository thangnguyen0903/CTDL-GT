#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main() {
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        vector<int> a;
        while(n)
        {
        	a.push_back(n % 10);
        	n /= 10;
		}
		
		reverse(a.begin(), a.end());
		
		int vt = a.size();
		
		for(int i = 0; i < a.size(); i++)
		{
			if(a[i] >= 2)    // vi du 112 thi so can tim la 111 (2 > 1) hoac 112111 thi 111111
			{
				vt = i;
				break;
			}
		}
		
		
		for(int i = vt; i < a.size(); i++)
		{
			a[i] = 1;
		}
        ll res = 0, s = 1;
        for(int i = a.size() - 1; i >= 0; i--)
        {
        	res += a[i] * s;
        	s *= 2;
		}
        
        cout << res << endl;
        
        
    }
    return 0;
}

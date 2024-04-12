#include<bits/stdc++.h>

using namespace std;



int main()
{
	int t; cin >> t;
	
	while(t--)
	{
		string s; cin >> s;
		
		int res = 1;
		
		int n = s.size();
		
		// tam le
		
		for(int i = 0; i < n; i++)
		{
			int k = i, v = i;
			
			while(k >= 0 && v < n)
			
			{
				if(s[k] == s[v])
				{
					res = max(res, v - k + 1);
					k--; v++;
				}
				
				else break;
			}
			
		
		
		
		}
		
		
		// tam chan
		
		for(int i = 0; i < n; i++)
		{
			int k = i, v = i + 1;
			
			while(k >= 0 && v < n)
			{
				if(s[k] == s[v])
				{
					res = max(res, v - k + 1);
					
					k--; v++;
					
					
				}
				
				else break;
			}
		}
		
		cout << res << endl;
		
	}
	
	
	
	

    return 0;
}

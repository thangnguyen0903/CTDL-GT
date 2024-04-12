#include<bits/stdc++.h>
using namespace std;

struct dta{
	int x, y;
	
};

bool cmp(dta a, dta b)
{
	
	return a.x < b.x;
	
	
	
}

int main() {
    int t;
    cin >> t;

    while (t--) {
    
    	int n; cin >> n;
    	
    	dta a[n + 5];
    	
    	int dp[n + 5];
    	
    	for(int i = 1; i <= n; i++)\
    	{
    		cin >> a[i].x >> a[i].y;
    		dp[i] = 1;
		}
		
		sort(a + 1, a + 1 + n, cmp);
		
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j < i; j++)
			{
				if(a[i].x > a[j].y) dp[i] = max(dp[i], dp[j] + 1);
 			}
		}
    
    
        cout << dp[n] << endl;
        
        
    }

    return 0;
}

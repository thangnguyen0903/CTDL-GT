#include<bits/stdc++.h>

using namespace std;



int main()
{
	int t; cin >> t;
	
	while(t--)
	{
		
		int n, m; cin >> n >> m;
		
		int a[n][m];
		
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		
		
		
		vector<vector<int>> dp(n, vector<int>(m));
		
        dp[0][0] = a[0][0];
        
		for(int i = 1; i < n; i++)
		{
			dp[i][0] = dp[i - 1][0] + a[i][0];
		}
		
		
		for(int j = 1; j < m; j++)
		{
			dp[0][j] = dp[0][j - 1] + a[0][j];
		}
		
		for(int i = 1; i < n; i++)
		{
			for(int j = 1; j < m; j++)
			{
				dp[i][j] = min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) + a[i][j];
			}
		}
		
		
		cout << dp[n - 1][m - 1] << endl;
		
		
		
	}
	
	
	
	

    return 0;
}

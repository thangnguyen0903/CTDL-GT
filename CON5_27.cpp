#include<bits/stdc++.h>

using namespace std;











int main()
{
	
	int t; cin >> t;
	
	while(t--)
	{
		
		int n, w; cin >> n >> w;
		
		int wei[n], val[n];
		
		for(int i = 0; i < n; i++) cin >> wei[i];
		
		for(int i = 0; i < n; i++) cin >> val[i];
		
		vector<vector<int> > dp(n + 1, vector<int> (w + 1));
	
		for(int i = 0; i <= n; i++)
		{
			for(int j = 0; j <= w; j++)
			{
				if(i == 0 || j == 0) dp[i][j] = 0;
				
				else if(wei[i - 1] <= j) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - wei[i - 1]] + val[i - 1]);
				
				else dp[i][j] = dp[i - 1][j];
			}
		}
		
		
		cout << dp[n][w] << endl;
		
		
	}
	
	
	
	
}

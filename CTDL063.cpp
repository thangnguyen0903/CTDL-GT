#include<iostream>
#include<vector>
using namespace std;

const long long mod = 1e9 + 7;

int  main() {
    
	int t; cin >> t;
	
	while(t--)
	{
		int n, k; cin >> n >> k;
		
		int a, dp[n + 5][k];
		
		dp[0][0] = 0;
		
		for(int i = 1; i < k; i++) dp[0][i] = -1005;
		
		for(int i = 1; i <= n; i++)
		{
			cin >> a;
			a %= k;
			
			for(int j = 0; j < k; j++)
			{
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j + k - a) % k] + 1);
				
				
			}
			
			}
			
			cout << dp[n][0] << endl;
			
		}
		
		
		
		
	
    
    

    return 0;
}

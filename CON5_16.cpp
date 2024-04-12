#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int t; cin >> t;
	
	while(t--)
	{
		
		int n; cin >> n;
		
		int a[n];
		
		for(int i = 0; i < n; i++) cin >> a[i];
		
		vector<long long > dp(n + 1);
		
		long long ma_x = -1;
		
		for(int i = 0; i < n; i++)
		{
			dp[i] = a[i];
			for(int j = 0; j < i; j++)
			{
				if(a[i] > a[j]) dp[i] = max(dp[i], dp[j] + a[i]);
			}
			ma_x = max(ma_x, dp[i]);
		}
		
		cout << ma_x << endl;
		
		
	}
	
	
	
	
}

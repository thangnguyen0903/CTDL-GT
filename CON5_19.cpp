#include<bits/stdc++.h>
using namespace std;

	


int main() {
    int t;
    cin >> t;

    while (t--) {
    
    	int n, insert, remove, copy; 
    	
    	cin >> n >> insert >> remove >> copy;
    	
    	int dp[n + 5] = {0};
    	
    	dp[0] = 0;
    	dp[1] = insert;
    	
    	for(int i = 2; i <= n; i++)
    	{
    		if(i & 1) dp[i] = min(dp[i - 1] + insert, dp[(i + 1) / 2] + copy + remove);
    		
    		else dp[i] = min(dp[i - 1] + insert, dp[i / 2] + copy);
    		
    		
    		
		} 
         
         cout << dp[n] << endl;
        
    }

    return 0;
}

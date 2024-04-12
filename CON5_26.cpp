#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while(t--) {
        int wei, n; 
        cin >> wei >> n;
        
        int w[n]; 
        for(int &x : w) 
            cin >> x;
        
        vector<vector<int>> dp(n + 1, vector<int>(wei + 1));
        
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= wei; j++) {
                if(i == 0 || j == 0)
                    dp[i][j] = 0;
                else if(w[i - 1] <= j)
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + w[i - 1]);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        
        cout << dp[n][wei] << endl;
    }

    return 0;
}

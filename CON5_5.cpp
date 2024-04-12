#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n, k; 
        cin >> n >> k;
        vector<vector<int>> dp(n + 1, vector<int>(k + 1));
        
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= min(i, k); j++) {
                if(j == 0 || j == i) dp[i][j] = 1;
                else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
            }
        }
        
        cout << dp[n][k] << endl;
    }

    return 0;
}

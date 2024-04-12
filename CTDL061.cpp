#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int t; cin >> t;
    while(t--) {
        string a, b; 
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0)); // Initialize dp array with 0
        
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}

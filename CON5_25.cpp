#include <iostream>
#include <vector>

using namespace std;

// Hàm tính s? cách con ?ch có th? nh?y lên d?n d?nh
int countWays(int n) {
    vector<int> dp(n + 1, 0);
    
    // Tru?ng h?p co s?
    dp[0] = 1; // Không có bu?c nào c?, có m?t cách
    dp[1] = 1; // M?t bu?c duy nh?t, có m?t cách
    
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    
    return dp[n];
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        
        cout << countWays(n) << endl;
    }
    
    return 0;
}

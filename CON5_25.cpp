#include <iostream>
#include <vector>

using namespace std;

// H�m t�nh s? c�ch con ?ch c� th? nh?y l�n d?n d?nh
int countWays(int n) {
    vector<int> dp(n + 1, 0);
    
    // Tru?ng h?p co s?
    dp[0] = 1; // Kh�ng c� bu?c n�o c?, c� m?t c�ch
    dp[1] = 1; // M?t bu?c duy nh?t, c� m?t c�ch
    
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

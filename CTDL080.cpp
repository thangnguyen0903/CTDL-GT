#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int dp[404]={}, mx=-1e9;
        for(char c : s){
            dp[c] = max(dp[c], 1);
            for(char j = 'a'; j < c; ++j){
                dp[c] = max(dp[c], dp[j]+1);
            }
            mx = max(mx, dp[c]);
        }
        cout << mx << '\n';
    }
    return 0;
}

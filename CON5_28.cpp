#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string s1, s2;
int dp()
{
    int m = s1.size(), n = s2.size();
    int f[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
                f[i][j] = j;
            else if (j == 0)
                f[i][j] = i;
            else if (s1[i - 1] == s2[j - 1])
                f[i][j] = f[i - 1][j - 1];
            else
                f[i][j] = 1 + min(f[i][j - 1], min(f[i - 1][j], f[i - 1][j - 1]));
        }
    }
    return f[m][n];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s1 >> s2;
        cout << dp() << endl;
    }
}

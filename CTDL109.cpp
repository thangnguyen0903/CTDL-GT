#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, u, v, x, y, ok = 0;
        cin >> n >> m >> u >> v;
        string s;
        vector<bool> check(n + 1, 1);
        vector<vector<int>> a(n + 1);
        stack<pair<int, string>> st;
        while (m--)
        {
            cin >> x >> y;
            a[x].push_back(y);
        }
        st.push({u, to_string(u) + " "});
        check[u] = 0;
        while (st.size())
        {
            x = st.top().first;
            s = st.top().second;
            if (x == v)
            {
                ok = 1;
                cout << s << endl;
                break;
            }
            st.pop();
            for (int i = 0; i < a[x].size(); i++)
            {
                int y = a[x][i];
                if (check[y])
                {
                    check[y] = 0;
                    st.push({x, s});
                    st.push({y, s + to_string(y) + " "});
                    break;
                }
            }
        }
        if (ok == 0)
            cout << -1 << endl;
    }
}

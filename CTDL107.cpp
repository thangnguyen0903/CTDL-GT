#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, u, x, y;
        cin >> n >> m >> u;
        vector<int> a[n + 1], check(n + 1, 0);
        for (int i = 0; i < m; i++)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        //for (int i = 1; i <= n; i++)
            //sort(a[i].begin(), a[i].end());
        queue<int> q;
        q.push(u);
        check[u] = 1;
        while (q.size())
        {
            u = q.front();
            q.pop();
            cout << u << " ";
            for (int i = 0; i < a[u].size(); i++)
            {
                int v = a[u][i];
                if (!check[v])
                {
                    q.push(v);
                    check[v] = 1;
                }
            }
        }
        cout << endl;
    }
}

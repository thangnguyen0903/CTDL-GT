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
		int n, m, u, v;
		cin >> n >> m;
		vector<vector<int>> a(n + 1);
		while (m--)
		{
			cin >> u >> v;
			a[u].push_back(v);
		}
		for (int i = 1; i <= n; i++)
		{
			cout << i << ": ";
			for (int j = 0; j < a[i].size(); j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
}

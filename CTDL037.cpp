#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	int a[100001] = {};
	int b[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	for (int i = 1; i <= 100000; i++)
	{
		a[i] = 1e9;
		for (int j = 0; j < 10; j++)
		{
			if (i == b[j])
			{
				a[i] = 1;
				break;
			}
			if (i - b[j] > 0 && a[i - b[j]] > 0)
				a[i] = min(a[i], a[i - b[j]] + 1);
		}
	}
	while (t--)
	{
		int n;
		cin >> n;
		cout << a[n] << endl;
	}
}

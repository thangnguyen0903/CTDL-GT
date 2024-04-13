#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int t = n-1;
        while(k--)
        {
            cout << a[t] << " ";
            t--;
        }
        cout << endl;
    }
}

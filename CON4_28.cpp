#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int ans = n, l = n / 2 - 1, r = n - 1;
        while (l >= 0 && r >= n / 2)
        {
            if (2 * a[l] <= a[r])
            {
                l--;
                r--;
                ans--;
            }
            else
                l--;
        }
        cout << ans << endl;
    }
}

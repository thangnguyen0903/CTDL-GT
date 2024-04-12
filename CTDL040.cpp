#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t; cin >> t;
     while(t--)
     {
	 
     set<int> se;
     int n, d; cin >> n;
     ll a[n];
     for(ll &x : a) cin >> x;
     sort(a, a + n);
     ll s1 = 0, s2 = 0;
     for(int i = 0; i < n; i++){
          if(i % 2 == 0) s1 = s1 * 10 + a[i];
          else s2 = s2 * 10 + a[i];
     }
     cout << s1 + s2 << endl;
     }	
}

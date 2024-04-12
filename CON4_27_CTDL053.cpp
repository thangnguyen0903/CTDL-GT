#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;
vector<int> a;

void Vec(int n) {
    for(int fac = 2; n / 2 > 0; fac *= 2, n /= 2)
        a.push_back(fac);
}

int val(int k, int n, int pos) {
    if(k % 2 == 1) return 1;
    if(k == a[pos]) return n % 2;
    return val(k < a[pos] ? k : 2 * a[pos] - k, n / 2, pos - 1);
}

int main() {
	int t; cin >> t;
	
	while(t--)
	{
		a.clear();
		
    int n, l, r, res = 0; cin >> n >> l >> r;
    Vec(n);
    for(int i = l; i <= r; i++)
        res += val(i, n, a.size() - 1);
    cout << res << endl;
    }
    return 0;
}

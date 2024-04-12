#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll MOD = 1e9 + 7;

ll Exu(ll a, ll b)
{
	if(b == 0) return 1;
	
	if(b == 1) return a % MOD;
	
	ll res = Exu(a, b / 2);
	
	if(b % 2 == 0) return (res * res) % MOD;
	
	else return (((res * res) % MOD) * a) % MOD;
}



int main()
{
	int t; cin >> t;
	
	while(t--)
	{
		ll a, b; cin >> a;
		
		b = a; 
		
		ll k = 0;
		
		while(b)
		{
			k = 10 * k + b % 10;
			
			b /= 10;
		}
		
		cout << Exu(a, k) << endl;
		
		
		
		
		
	}
	
	
	
	
	
	
	return 0;
}

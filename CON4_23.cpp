#include <bits/stdc++.h>

using namespace std;

long long mod = 1e9 + 7;

long long Exu(long long a)
{
	if(a == 0) return 1;
	if(a == 1) return 2;
	
	int pi = Exu(a / 2);
	
	if(a % 2) return 2 * pi * pi;
	
	else return pi * pi;
	
	
}





int main()
{
	int t; cin >> t;
	
	while(t--)
	{
		
	
	long long n, k; cin >> n >> k;
	
	long long len = Exu(n) / 2;
	
	while(1)
	{
		if(k == 1) 
		{
			cout << 1;
			break;
		}
		
		if(k == len) 
		{
			cout << n;
			break;
		}
		
		if(k > len)
		{
			k = len - (k - len);
			
			
		}
		n--;
		len /= 2;
	}
		
		cout << endl;
		
	}
		
	return 0;
	
}

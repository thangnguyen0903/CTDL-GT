#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int Exu(int *a, int n)
{
	int l  = 0, r = n - 1;
	
	while(l <= r)
	{
		int m = l + (r - l) / 2;
		
		if(a[m] == 1) r = m - 1;
		
		else
		{
			if(m == n - 1 || a[m + 1] == 1)
			{
				return m + 1;
			}
			
			else l = m + 1;
		}
		
		
		
	}
	
	return 0;
	
	
}



int main() {
	
	int t; cin >> t;
	
	while(t--)
	{
		
		int n; cin >> n;
		
		int a[n];
		
		for(int i = 0; i < n; i++) cin >> a[i];
		
		cout << Exu(a, n) << endl;
		
		
		
		
		
		
		
	}

    return 0;
}

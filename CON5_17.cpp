#include<bits/stdc++.h>

using namespace std;

long long MaxSum(int *a, int n)
{
	long long max_sum = LONG_LONG_MIN;
	
	long long MSI[n], MSD[n];
	
	for(int i = 0; i < n; i++)
	{
		MSD[i] = a[i];
		MSI[i] = a[i];
	}
	
	for(int i = 1; i < n; i++)
	{
		for(int j =0; j < i; j++)
		{
			if(a[i] > a[j]) MSI[i] = max(MSI[i], MSI[j] + a[i]);
 		}
	}
	
	for(int i = n - 2; i >= 0; i--)
	{
		for(int j = n - 1; j > i; j--)
		{
			if(a[i] > a[j]) MSD[i] = max(MSD[i], MSD[j] + a[i]);
		}
	}
	
	
	for(int i = 0; i < n; i++)
	{
		max_sum = max(max_sum, (MSD[i] + MSI[i] - a[i]));
	}
	
	
	return max_sum;
	
	
	
}









int main()
{
	
	int t; cin >> t;
	
	while(t--)
	{
		
		int n; cin >> n;
		
		int a[n];
		
		for(int i = 0; i < n; i++) cin >> a[i];
		
		cout << MaxSum(a, n) << endl;
		
		
		
		
	}
	
	
	
	
}

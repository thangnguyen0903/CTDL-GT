#include<bits/stdc++.h>

using namespace std;

void exu(int n)
{
	vector<int> v(n);
	
	for(int i = 0; i < n; i++)
	{
		v[i] = n - i;
	}
	
	do
	{
		for(int i = 0; i < n; i++)
		{
			cout << v[i];
		}
		cout << ' ';
	}while(prev_permutation(v.begin(), v.end()));
	
	
	cout << endl;
	
	
	
}



int main() {
    
    int t; cin >> t;
    while(t--)
    {
    	int n; cin >> n;
    	
    	exu(n);
    	
	
    	
    	
	}
    
    
    
    return 0;
}

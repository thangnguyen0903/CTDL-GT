#include <bits/stdc++.h>

using namespace std;

vector<long long> adj[1001];

int main() {
    long long t; cin >> t;
    while(t--)
    {
        long long tu, mau; cin >> tu >> mau;
        long long res;
        while(1)
        {
        	
		
        if(mau % tu == 0)
        {
        	cout << "1/" << mau / tu;
        	break;
		}
		
		else 
		{
			res = mau / tu + 1;
			
			cout << "1/" << res << " + ";
			
			tu = tu * res - mau;	
			mau = res * mau;
		}
		
		
	}
	cout << endl;
    }
    return 0;
}

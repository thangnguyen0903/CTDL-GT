#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

long long numberofBishops(long long n)
{
	if(n < 1) return 0;
	else if(n == 1) return n = 1;
	
	else return 2 * (n - 1);
}




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n; cin >> n;
        
        cout << numberofBishops(n) << endl;
        
    }
    
    return 0;
}

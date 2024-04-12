#include <bits/stdc++.h>

using namespace std;

vector<int> adj[1001];

int main() {
    int t; cin >> t;
    while(t--)
    {
        int n, s, m; cin >> n >> s >> m;
        
        int soluongthuccan = s * m;
        int soluongthuctoidamuaduoc = n * (s - s / 7); // s - s / 7 so ngay toi da co the di mua luong thuc va s / 7 la so ngay chu nhat
        
        if(soluongthuccan > soluongthuctoidamuaduoc) 
       {
        	cout << -1 << endl;		}
		else 
		{
			for(int i = 1; i <= s - s / 7; i++)
			{
				if(n * i >= s * m)
				{
					cout << i << endl;
					break;
				}
			}
			
			
			
		}

    }
    return 0;
}

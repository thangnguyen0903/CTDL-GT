#include<bits/stdc++.h>
using namespace std;


const long long mod = 1e9 + 7;
long long dp[101][50005]; // dp[i][j] la tat ca cac so co i chu so va tong cac chu so la j
// so co i chu so se duoc tao thanh bang cach la ghep them 1 so vao cai so i - 1
// dp[i][j] += dp[i - 1][j - so] 
// i - 1 co tong la j - so
// so la so minh chen vao o so i - 1
// se duoc mot so i - 1 + 1 = i va co tong j - so + so = j
// dp[i][0] = 0 dp[0][i] = 0 dp[1][j] = 1

int main() {
    for(int i = 0; i < 101; i++) dp[i][0] = 0;
    
    for(int i = 0; i < 50005; i++) dp[0][i] = 0;
    
    for(int j = 1; j <= 9; j++) 
    dp[1][j] = 1;
    
    for(int i = 1; i <= 100; i++) // so chu so
    {
    	for(int so = 0; so <= 9; so++)
    	{
    		for(int j = so; j <= 50000; j++)
    		{
    			dp[i][j] = (dp[i][j] % mod + dp[i - 1][j - so] % mod) % mod;
			}
		}
	}
    
    int t; cin >> t;
    while(t--)
    {
    	int n, k; cin >> n >> k;
    	
    	cout << dp[n][k] << endl;
	}
	
    return 0;
}

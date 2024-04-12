#include<bits/stdc++.h>
using namespace std;

	


int main() {
	long long F[30][30] = {0};
    	
    	for(int i = 0; i <= 25; i++) F[i][0] = 1;
    	
    	for(int i = 0; i <= 25; i++) F[0][i] = 1;
        
        F[0][0] = 0;
        
        for(int i = 0; i <= 25; i++)
        {
        	for(int j = 0; j <= 25; j++)
        	{
        		if(i == 0 || j == 0) continue;
        		F[i][j] = F[i][j - 1] + F[i - 1] [j];
			}
		}
    int t;
    cin >> t;

    while (t--) {
    
    	int n, m; cin >> n >> m;
    	
		
		cout << F[n][m] << endl;
    }

    return 0;
}

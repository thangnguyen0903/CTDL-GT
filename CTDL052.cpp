#include<bits/stdc++.h>

using namespace std;




int main() {
	
	int t; cin >> t;
	
	while(t--)
	{
		
		string a, b;
		
		int k; cin >> k >> a >> b;
		
		while(a.size() > b.size()) b = "0" + b;
		while(b.size() > a.size()) a = "0" + a;
		
		string tong = "";
		int nho = 0;
		for(int i = (int)a.size() - 1; i >= 0; i--)
		{
			long long t = (int)(a[i] - '0') + (int)(b[i] - '0') + nho;
			
			
			
			tong = (char)(t % k + '0') + tong;
			
			
			nho = t / k;
			
			
		}
		
		if(nho > 0) tong = (char)(nho + '0') + tong;
		
		cout << tong << endl;
		
    }
    
    return 0;
    
}

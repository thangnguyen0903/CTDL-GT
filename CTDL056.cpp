#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long con(string a)
{
	long long tong = 0;
	
	long long heso = 1;
	
	for(int i = (int)a.size() - 1; i >= 0; i--)
	{
		if(a[i] == '1')
		{
			tong += heso;
		}
		heso *= 2;
	}
	
	
	return tong;
	
}



int main() {
	
	int t; cin >> t;
	
	while(t--)
	{
		
		string a, b; cin >> a >> b;
		
		long long a1 = con(a);
		long long b1 = con(b);
		
		cout << a1 * b1 << endl;
		
		
		
	}

    return 0;
}

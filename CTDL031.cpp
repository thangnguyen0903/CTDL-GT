#include <iostream>
using namespace std;

// Hàm chuy?n d?i s? th?p phân thành mã Gray
unsigned int decimalToGray(unsigned int n)
{
    return n ^ (n >> 1);
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		
	
    int n; cin >> n;
	cout << decimalToGray(n) << endl;
    
	}
    return 0;
}

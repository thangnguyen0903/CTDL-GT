#include <iostream>
using namespace std;

// H�m chuy?n d?i s? th?p ph�n th�nh m� Gray
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

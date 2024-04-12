#include <iostream>
using namespace std;

long long min_operations(long long x, long long y) {

	// If both are equal then return 0
	if (x == y)
		return 0;

	// Check if conversion is possible or not
	if (x <= 0 && y > 0)
		return -1;

	// If x > y then we can just increase y by 1
	// Therefore return the number of increments required
	if (x > y)
		return x - y;

	// If last bit is odd
	// then increment y so that we can make it even
	if (y & 1)
		return 1 + min_operations(x, y + 1);

	// If y is even then divide it by 2 to make it closer to
	// x
	else
		return 1 + min_operations(x, y / 2);
}

// Driver code
signed main() {
	long long t; cin >> t;
	
	while(t--)
	{
		
	long long a, b; cin >> a >> b;
	
	cout << min_operations(a, b) << endl;
	
	}
	return 0;
}

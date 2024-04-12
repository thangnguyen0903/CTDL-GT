#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

// Hàm tính s? Fibonacci th? N
int fibonacci(int n) {
    if (n <= 1)
        return n;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = (a + b) % MOD;
        a = b;
        b = c;
    }
    return b;
}

int main() {
	int t; cin >> t;
	while(t--)
	{
		
	
    int n;
    cin >> n;
    
    int result = fibonacci(n);
    cout << result << endl;
    }

    return 0;
}

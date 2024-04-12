#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
    string result = "";
    int carry = 0;
    int i = a.size() - 1, j = b.size() - 1;
    while(i >= 0 || j >= 0 || carry) {
        carry += (i >= 0 ? a[i--] - '0' : 0) + (j >= 0 ? b[j--] - '0' : 0);
        result = char(carry % 2 + '0') + result;
        carry /= 2;
    }
    return result.substr(result.size() - a.size()); // Ensure the result has n digits
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, K;
        string X;
        cin >> n >> K >> X;
        string K_binary = bitset<32>(K + 1).to_string(); // Convert K to binary
        K_binary = K_binary.substr(K_binary.find('1')); // Remove leading zeros
        string Y = addBinary(X, K_binary); // Add X and K_binary
        cout << Y << "\n";
    }
    return 0;
}

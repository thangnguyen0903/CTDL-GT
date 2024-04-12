#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

vector<vector<int>> multiply(vector<vector<int>> &A, vector<vector<int>> &B) {
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] = (C[i][j] + 1LL * A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    return C;
}

vector<vector<int>> power(vector<vector<int>> A, int K) {
    int n = A.size();
    vector<vector<int>> X(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        X[i][i] = 1;
    }
    while (K > 0) {
        if (K & 1) {
            X = multiply(X, A);
        }
        A = multiply(A, A);
        K >>= 1;
    }
    return X;
}

int main() {
    int t; cin >> t;
    while(t--)
    {
        int n, K; cin >> n >> K;
        vector<vector<int>> A(n, vector<int>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> A[i][j];
            }
        }
        A = power(A, K);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum = (sum + A[i][i]) % MOD;
        }
        cout << sum << '\n';
    }
    return 0;
}

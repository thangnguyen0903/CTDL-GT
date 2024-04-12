#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 1000

long long A[MAX][MAX], X[MAX][MAX], Y[MAX][MAX];
int N;

void multiply(long long a[MAX][MAX], long long b[MAX][MAX]) {
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++) {
            Y[i][j] = 0;
            for(int k = 0; k < N; k++)
                Y[i][j] = (Y[i][j] + a[i][k] * b[k][j]) % MOD;
        }
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            a[i][j] = Y[i][j];
}

void power(long long K) {
    if(K <= 1)
        return;
    power(K / 2);
    multiply(X, X);
    if(K % 2)
        multiply(X, A);
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long K;
        cin >> N >> K;
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++) {
                cin >> A[i][j];
                X[i][j] = A[i][j];
            }
        power(K);
        long long sum = 0;
        for(int i = 0; i < N; i++)
            sum = (sum + X[i][N - i - 1]) % MOD;
        cout << sum << endl;
    }
    return 0;
}

#include <iostream>
#include <map>
#include <array>
using namespace std;

long long f(int A[], int n, int s, int k, int i, map<array<int, 3>, long long>& memo){
  if (k == 0)
    return s == 0 ? 1 : 0;
  if (i == n || s < 0 || k < 0)
    return 0;
  if (memo.find({s, k, i}) != memo.end())
    return memo[{s, k, i}];
  return memo[{s, k, i}] = f(A, n, s - A[i], k - 1, i + 1, memo) + f(A, n, s, k, i + 1, memo);
}

int main(){
   int T;
   cin >> T;
   while (T--) {
       int N, K, S;
       cin >> N >> K >> S;
       int A[N];
       for (int i = 0; i < N; i++)
           cin >> A[i];
       map<array<int, 3>, long long> memo;
       cout << f(A, N, S, K, 0, memo) << "\n";
   }
   return 0;
}

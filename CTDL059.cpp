#include<bits/stdc++.h>
using namespace std;

int findMissing(int A[], int B[], int N)
{
    int low = 0, high = N - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if ((mid == N - 1 || B[mid] != A[mid]) && (mid == 0 || B[mid - 1] == A[mid - 1]))
            return mid;
        else if (B[mid] == A[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        int A[N], B[N-1];
        for(int i = 0; i < N; i++)
            cin >> A[i];
        for(int i = 0; i < N-1; i++)
            cin >> B[i];
        cout << findMissing(A, B, N) + 1 << endl;
    }
    return 0;
}

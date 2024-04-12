#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int>& A) {
    int count0 = 0, count1 = 0, count2 = 0;

    // Ð?m s? lu?ng các s? 0, 1, 2 trong m?ng
    for (int num : A) {
        if (num == 0) count0++;
        else if (num == 1) count1++;
        else count2++;
    }

    // Xây d?ng l?i m?ng t? s? lu?ng các s? 0, 1, 2
    int i = 0;

    // S?p x?p s? 0
    while (count0--) {
        A[i++] = 0;
    }

    // S?p x?p s? 1
    while (count1--) {
        A[i++] = 1;
    }

    // S?p x?p s? 2
    while (count2--) {
        A[i++] = 2;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        sort012(A);

        // In ra m?ng dã s?p x?p
        for (int num : A) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

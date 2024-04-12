#include <iostream>
#include <algorithm>

using namespace std;

int Exu(int *a, int n, int mid) {
    int l = 0, r = n - 1;

    while (l <= r) {
        int m = (l + r) / 2;

        if (a[m] == mid)
            return m + 1;
        else if (a[m] < mid)
            l = m + 1;
        else
            r = m - 1;
    }

    return 0;
}

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, m;
        cin >> n >> m;

        int *a = new int[n]; // Dynamically allocate memory for the array

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        if (Exu(a, n, m) != 0)
            cout << Exu(a, n, m);
        else
            cout << "NO";

        delete[] a; // Free dynamically allocated memory
        cout << endl;
    }

    return 0;

}

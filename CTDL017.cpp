#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> v(n);
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++) {
            v[n - 1].push_back(a[i]);
        }

        for (int i = n - 1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                v[i - 1].push_back(v[i][j] + v[i][j + 1]);
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            cout << '[';
            for (int j = 0; j < (int)v[i].size(); j++) {
                cout << v[i][j];
                if (j != (int)v[i].size() - 1)
                    cout << ' ';
            }
            cout << ']';
            cout << endl;
        }
    }

    return 0;
}

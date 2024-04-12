#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& target) {
    int operations = 0, prev = 0;
    for (int num : target) {
        if (num > prev) {
            operations += num - prev;
        }
        prev = num;
    }
    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> target(n);
        for (int i = 0; i < n; ++i) {
            cin >> target[i];
        }
        cout << minOperations(target) << endl;
    }
    return 0;
}

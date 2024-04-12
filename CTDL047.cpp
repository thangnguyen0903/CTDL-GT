#include<bits/stdc++.h>
using namespace std;

void findLuckyNumber(int n) {
    int num4 = n / 7;
    int num7 = n % 7;
    while (num4 >= 0) {
        if (num7 % 4 == 0) {
            for (int i = 0; i < num7 / 4; ++i) {
                cout << "4";
            }
            for (int i = 0; i < num4; ++i) {
                cout << "7";
            }
            cout << "\n";
            return;
        }
        num4--;
        num7 += 7;
    }
    cout << "-1\n";
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        findLuckyNumber(n);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

void findMaximumNum(string str, int k, string& max) {
    if(k == 0)
        return;
    int n = str.length();
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n ; j++)
            if (str[j] > str[max_idx])
                max_idx = j;
        if (max_idx != i) {
            swap(str[i], str[max_idx]);
            k--;
        }
        if(k == 0)
            break;
    }
    max = str;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int K;
        string S;
        cin >> K >> S;
        string max = S;
        findMaximumNum(S, K, max);
        cout << max << endl;
    }
    return 0;
}

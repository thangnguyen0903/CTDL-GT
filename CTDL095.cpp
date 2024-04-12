#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string P;
        cin >> P;
        stack<int> s;
        for(int i = 0; i < P.size(); i++) {
            if(P[i] == '(') {
                if(i > 0 && P[i-1] == '-') {
                    s.push(-1);
                } else {
                    s.push(1);
                }
            } else if(P[i] == ')') {
                s.pop();
            } else if(P[i] == '+' || P[i] == '-') {
                if(!s.empty() && s.top() == -1) {
                    P[i] = (P[i] == '+') ? '-' : '+';
                }
            }
        }
        string result = "";
        for(int i = 0; i < P.size(); i++) {
            if(P[i] != '(' && P[i] != ')') {
                result += P[i];
            }
        }
        cout << result << "\n";
    }
    return 0;
}

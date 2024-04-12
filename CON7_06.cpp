#include<bits/stdc++.h>
using namespace std;

bool checkRedundancy(string &s) {
    stack<char> st;
    for (char ch : s) {
        if (ch == ')') {
            char top = st.top();
            st.pop();
            bool flag = true;
            while (top != '(') {
                if (top == '+' || top == '-' || top == '*' || top == '/')
                    flag = false;
                top = st.top();
                st.pop();
            }
            if (flag == true)
                return true;
        }
        else
            st.push(ch);
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        if (checkRedundancy(s))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}

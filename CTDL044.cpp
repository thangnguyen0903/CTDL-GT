#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int &x : a) cin >> x;
        
        priority_queue<int, vector<int>, greater<int>> qp;
        
        for (int x : a) {
            qp.push(x);
        }
        
        long long tong = 0;
        
        while (qp.size() > 1) { 
            int a1 = qp.top();
            qp.pop();
            int a2 = qp.top();
            qp.pop();
            
            long long t = a1 + a2;
            tong += t;
            
            qp.push(t);
        }
        
        cout << tong << endl;
    }
    
    return 0;
}

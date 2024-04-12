#include<bits/stdc++.h>
#include <iostream>
using namespace std;


int n, m; //n: dinh, m: canh
int a[1001][1001]; // ma tran ke
vector<int> adj[1001]; // danh sach ke

int main() {
  int n;
  cin >> n;
  cin.ignore();
  for(int i = 1; i <= n; i++) {
    string s, str_num;
    int num;
    getline(cin, s);
    stringstream ss(s);
    while(ss >> str_num) {
      num = stoi(str_num);
      a[i][num] = 1;
    }
  }
  
  // OUTPUT, ma tran ke
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

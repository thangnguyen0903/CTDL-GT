#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
int visited[1001];

void dfs(int node) {
    visited[node] = 1;
    for(int child : adj[node])
        if(!visited[child])
            dfs(child);
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, u, v;
        cin >> N;
        for(int i = 1; i <= N; i++) adj[i].clear(), visited[i] = 0;
        for(int i = 1; i < N; i++) cin >> u >> v, adj[u].push_back(v), adj[v].push_back(u);
        int cc_count = 0;
        for(int i = 1; i <= N; i++) {
            if(!visited[i]) dfs(i), cc_count++;
        }
        if(cc_count == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

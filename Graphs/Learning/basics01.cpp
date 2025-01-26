#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // int adj[n+1][n+1];
    // for(int i = 0; i < n; i++) {
    //     int u, v;
    //     cin >> u >> v;

    //     adj[u][v] = 1;
    //     adj[v][u] = 1;
    // }

    // vector<int> adj[n+1];
    // for(int i = 0; i < m; i++) {
    //     int u, v;
    //     cin >> u >> v;
        
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }

    vector<pair<int, int>> adj[n+1];
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }


    return 0;
}
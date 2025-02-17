#include<iostream>
#include<vector>

using namespace std;

void dfs(int node, vector<vector<int>> adj, vector<int>& dfs_store, int vis[]) {
    vis[node] = 1;
    dfs_store.push_back(node);
    for(auto it: adj[node]) {
        if(!vis[node]) {
            dfs(it, adj, dfs_store, vis);
        }
    }
}

vector<int> dfsOfGraph(vector<vector<int>>& adj) {
    int vis[adj.size()] = {0};
    vis[0] = 1;
    vector<int> dfs_store;

    dfs(0, adj, dfs_store, vis);
    return dfs_store;
}

int main() {

}
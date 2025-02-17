#include<iostream>
#include<vector>

using namespace std;

/**
 * @brief returns the elements of a graph using breath-first search
 * 
 * @param V The number of nodes of the graph
 * @param adj[] The adjacency list of a graph
 * @return The bfs elements in the graph
 */
vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    int vis[V] = {0};
    vis[0] = 1;

    queue<int> q;
    q.push(0);
    vector<int> bfs;

    while(!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it: adj[node]) {
            if(!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
}

int main() {
    
}
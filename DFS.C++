#include <bits/stdc++.h>
using namespace std;

void adjacency_list(vector<vector<int>>& graph, int v, int e) {
    graph.resize(v + 1);
    for (int i = 0; i < e; i++) {
        int s, d;
        cin >> s >> d;
        graph[s].push_back(d);
        graph[d].push_back(s); // Add this line if the graph is undirected
    }
    cout << "Adjacency list representation: " << endl;
    for (int i = 1; i <= v; i++) {
        cout << i << ": ";
        for (int x : graph[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
}

void dfs_recursive(vector<vector<int>>& graph, vector<bool>& visited, int node) {
    visited[node] = true;
    cout << node << " "; 
    // Visit all unvisited neighbors
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs_recursive(graph, visited, neighbor);
        }
    }
}

void dfs(vector<vector<int>>& graph, int v, int start) {
    vector<bool> visited(v + 1, false);
    cout << "Depth First Search starting from node " << start << ": ";
    dfs_recursive(graph, visited, start);
    cout << endl;
}

int main() {
    int v, e;
    cout << "Input number of nodes and edges: " << endl;
    cin >> v >> e;
    vector<vector<int>> graph;
    cout << "Input edges for adjacency list: " << endl;
    adjacency_list(graph, v, e);
    int start_node = 1; // You can change the starting node as needed
    dfs(graph, v, start_node);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void adjacency_list(vector<vector<int>>& graph,int v,int e){
    graph.resize(v+1);
    for(int i=0;i<e;i++){
        int s,d;
        cin>>s>>d;
        graph[s].push_back(d);
    }
    cout<<"Adjacency list representation: "<<endl;
    for(int i=1;i<=v;i++){
        cout<<i<<":"<<endl;
        for(int x:graph[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
void bfs(vector<vector<int>>& graph,int v,int e,int s){
    vector<bool> visited(v+1,false);
    visited[s]=true;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        for(int neighbour:graph[x]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour]=true;
            }
        }
    }
}
int main() {
    int v,e;
    cout<<"Input no of nodes and no of edges: "<<endl;
    cin>>v>>e;
    vector<vector<int>> graph;
    cout<<"Input edges for adjacency list: "<<endl;
    adjacency_list(graph,v,e);
    cout<<"Breadth First Search: ";
    bfs(graph,v,e,1);
}
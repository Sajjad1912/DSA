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
void adjacency_matrix(vector<vector<int>>& graph,int v,int e){
    graph.resize(v+1);
    for(int i=0;i<=v;i++){
        graph[i].clear();
        graph[i].resize(v+1);
    }
    for(int i=0;i<e;i++){
        int s,d;
        cin>>s>>d;
        graph[s][d]=1;
    }
    cout<<"Adjacency matrix representation: "<<endl;
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int v,e;
    cout<<"Input no of nodes and no of edges: "<<endl;
    cin>>v>>e;
    vector<vector<int>> graph;
    cout<<"Input edges for adjacency list: "<<endl;
    adjacency_list(graph,v,e);
    cout<<"Input edges for adjacency matrix: "<<endl;
    adjacency_matrix(graph,v,e);
}
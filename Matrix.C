#include <bits/stdc++.h>
using namespace std;
#define vertex 6
//Initiolization of the graph
void initGraph(int matrix[vertex][vertex]){
    for (int row = 0; row < vertex ; row++)
    {
        for (int col = 0; col < vertex; col++)
        {
            matrix[row][col] = 0;
        }
    }
}
//Adding Eage
void addEdge(int matrix[vertex][vertex] , int source , int destination){
    matrix[source][destination] = 1;
    matrix[destination][source] = 1;
}
void printMatrix(int matrix[vertex][vertex]){
    for (int row = 0; row < vertex ; row++)
    {
        for (int col = 0; col < vertex; col++)
        {
            cout << matrix[row][col] <<" ";
        }
        cout << endl;
    }   
}
void printList(int matrix[vertex][vertex]){
    for (int row = 0; row < vertex ; row++)
    {
        cout << row << " ";
        for (int col = 0; col < vertex; col++)
        {
            if(matrix[row][col] ==1){
                cout << col << " ";
            }
        }
        cout << endl;
    }   
}
int main(){
    int graph[vertex][vertex];
    initGraph(graph);
    cout << "Initiol Graph " << endl;
    printMatrix(graph);
    cout << "\n";
    
    // adding edge for 0
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,0,3);
    addEdge(graph,0,5);
    // adding edge for 1
    addEdge(graph,1,0);
    addEdge(graph,1,4);
    // adding edge for 2
    addEdge(graph,2,0);
    addEdge(graph,2,3);
    addEdge(graph,2,4);
    // adding edge for 3
    addEdge(graph,3,0);
    addEdge(graph,3,2);
    addEdge(graph,3,4);
    // adding edge for 4
    addEdge(graph,4,1);
    addEdge(graph,4,2);
    addEdge(graph,4,3);
    addEdge(graph,4,5);
    // adding edge for 5
    addEdge(graph,5,0);
    addEdge(graph,5,4);

    // printing the metrix...
    cout<<"Adjacency Matrix "<<endl;
    printMatrix(graph);
    cout << "\n";
    cout<<"Adjacency List "<<endl;
    printList(graph);

    return 0;
}
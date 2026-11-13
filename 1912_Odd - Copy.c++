#include<bits/stdc++.h>
#define vertex 6
using namespace std;
void intigreap(char matrix[vertex][vertex]){
    for(int row = 0; row < vertex; row++){
        for(int col = 0; col <vertex; col++){
            matrix[row][col] = 'M';
        }
    }
}
void addEdge(char matrix[vertex][vertex], char source, char destination){
    matrix[source][destination] = 1;
    //matrix[destination][source] = 1;
}
void printMatrix(char matrix[vertex][vertex]){
    for(int row = 0; row < vertex; row++){
        for(int col = 0; col < vertex; col++){
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}
void printList(char matrix[vertex][vertex]){
    for (int row = 0; row < vertex; row++){
        cout << row << " ";
        for (int col = 0; col < vertex; col++){
            if(matrix[row][col] == 1){
                cout << col << " ";
            }
        }
        cout << endl;
    }
}
int main(){
    char matrix[vertex][vertex];
    intigreap(matrix);
    cout <<"Initional greap.";
    printMatrix(matrix);
    cout << "\n";
    addEdge(matrix,'A','B');//a-b
    addEdge(matrix,'A','D');
    addEdge(matrix,'A','C');
    addEdge(matrix,'B','E');
    addEdge(matrix,'B','D');
    addEdge(matrix,'C','F');
    addEdge(matrix,'D','E');
    addEdge(matrix,'D','F');
    addEdge(matrix,'D','C');
    addEdge(matrix,'F','E');
    addEdge(matrix,'E',' ');
    cout << "Adjacency Matrix" <<endl;
    printMatrix(matrix);
    cout << "Adjacency List " << endl;
    printList(matrix);
}
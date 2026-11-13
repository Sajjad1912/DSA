#include<iostream>
#include<vector>
using namespace std;
int main(){
    //pair < string , int > p = {"Sajjad",1912};
    //pair < int , pair < char , int > > p = { 12 , {'S',19}};
    //cout << p.first << endl;
    //cout << p.second.first << endl;
    //cout << p.second.second << endl;
    vector < pair <int , int> > v = {{1,2} , {2,3} ,{3,4} , {4,5} , {5,6}};
    v.push_back({6,7});// insert
    v.emplace_back(7,8);// in-place objects create
    for(/*pair<int , int>*/auto p : v){
        cout << p.first << " " << p.second<<endl;
    }

    return 0;
}
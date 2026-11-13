#include<iostream>
#include<list>
using namespace std;
int main(){
    list < int > l = {1,2,3,4,5};
    /*l.push_back(1);
    l.push_back(2);
    l.push_front(2);
    l.push_front(3);
    l.emplace_back(3);
    l.emplace_front(3);
    l.pop_back();
    l.pop_front();*/
    for(int value : l){
        cout<<value<<" ";
    }
}
//30 min
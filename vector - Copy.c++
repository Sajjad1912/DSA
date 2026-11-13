#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector<int>vec(5,21); // dynamic programming -> tabulation DP[][]
    vector<int> vec ={1,2,3,4,5,6};
    //vec.erase(vec.begin()+2);
    // vec.erase(vec.begin()+1,vec.begin()+3);
   // vec.insert(vec.begin()+2,100);
   //vec.clear();
   /* vector <int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(4);
    //cout<<vec.size()<<endl; //3
    //cout<<vec.capacity()<<endl; //4
    vec.pop_back();*/
   /* for (int value : vec)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    cout<<"value at index 2 : "<<vec[2]<<" Or "<<vec.at(2)<<endl;
    cout << "Front : " <<vec.front()<<endl;
    cout<<"Back : "<<vec.back()<<endl;
    cout<<"Is empty : "<<vec.empty()<<endl;*/
    //cout<<"Vec.begin : "<<*(vec.begin())<<endl;
    //cout<<"Vec.end : "<<*(vec.end())<<endl;
    /*vector<int>::iterator it;
    for(it = vec.begin();it!= vec.end();it++){
        cout<<*(it)<<" ";
    }*/
   //vector<int>::reverse_iterator it;
   for(/*vector<int>::reverse_iterator*/ auto it = vec.rbegin();it!= vec.rend();it++){
    cout<<*(it)<<" ";
   }
    return 0;
}
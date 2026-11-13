#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    //map < string , int > m;
    /*m["Tv"] = 100;
    m["Laptop"] = 100;
    m["Headphone"] = 50;*/
    //multimap < string , int > m; 
    unordered_map < string , int > m;
    m.insert({"Camera",25}); 
    m.emplace("Tablet",20);
    m.erase("Tv");
    for(auto p : m ){
        cout << p.first << " " << p.second << endl;
    }
    /*if(m.find("Camera") != m.end()){
        cout << "Found";
    }else{
        cout << "Not Found";
    }*/
    //cout << "Count : " << m.count("Laptop") << endl;
    //cout << "Count : " << m["Laptop"] << endl;
}
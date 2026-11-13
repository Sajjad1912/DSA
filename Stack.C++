#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    //cout << "Top value : " << s.top() << endl;
    /*while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }*/
   stack <int> s2;
   s2.swap(s);
   cout << "S size : "<<s.size()<<endl;
   cout << "S2 size : "<<s2.size()<<endl;
   return 0;
}
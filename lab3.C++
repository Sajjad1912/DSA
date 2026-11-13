#include<iostream>
using namespace std;
class Student{
private:
int id;

public:
void setId(int id){
    this->id = id;
}

int getId(){
    return id;
}
};
int main()
{
 Student std1;
 //std1.id =123;
 //cout<<std1.id<<endl;
 std1.setId(123);
 cout<<std1.getId()<<endl;
}
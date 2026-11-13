#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int id;
    string email;
    double cgpa;
    Student(string name,int id,string email,double cgpa){
        this->name = name;
        this->id = id;
        this->email = email;
        this->cgpa = cgpa;
    }
    void display(){
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<email<<endl;
        cout<<cgpa<<endl;
    }
};
int main()
{
    Student s1("Sajjatul Alam",1912,"sajjatulsunny@gmail.com",3.62); 
    s1.display();
    return 0;
}
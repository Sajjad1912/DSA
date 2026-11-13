#include<iostream>
using namespace std;
class Student
{
   public:
      string name;
      int id;
      string course;
      string section;
      Student(string name,int id, string course,string section)
      {
         this->name = name;
         this->id = id;
         this->course = course;
         this->section = section;
      }
      void display()
      {
         cout<<name<<" "<<id<<" "<<course<<" "<<section<<endl;
      }

};

int main()
{
   Student s1("Sajjad",1912,"C++","3L");
   s1.display();
}
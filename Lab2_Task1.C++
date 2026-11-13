#include<iostream>
using namespace std;
class Student
{
 public:
   string name;
   int id;
   string course;
   string section;
   Student()
   {

   }
   void display()
   {
      cout<<name<<" "<<id<<" "<<course<<" "<<section<<endl;
   }
};
int main()
{
   Student s1;
   s1.name = "Sajjad";
   s1.id = 1912;
   s1.course = "C++";
   s1.section = "3L";
   s1.display();
}
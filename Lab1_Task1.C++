#include<iostream>
using namespace std;
class student{
public:
    string name;
    int id;
    string course;
    string section;
    
    void TakeStudentDetails()
    {
        cout<<"Enter Student properties."<<endl;
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter id :";
        cin>>id;
        cout<<"Enter course :";
        cin>>course;
        cout<<"Enter section :";
        cin>>section;
    }

    void ShowStudentDetails()
    {
        cout<<"Show student details."<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Id : "<<id<<endl;
        cout<<"Course : "<<course<<endl;
        cout<<"Section : "<<section<<endl;
    }
};
int main()
{
    student s1;
    s1.TakeStudentDetails();
    s1.ShowStudentDetails();

    return 0;
}
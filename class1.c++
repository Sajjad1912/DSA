#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int id;
        string course;
        string section;
    Student(string name,int id,string course,string section){
        this->name = name;
        this->id = id;
        this->course = course;
        this->section = section;
    }
    void TakeStudentDetails(){
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your id : ";
        cin>> id;
        cout << "Enter your course name : ";
        cin>> course;
        cout << "Enter your section : ";
        cin>> section;
    }
    void ShowStudentDetails(){
        cout << "Show Student Details ."<<endl;
        cout << "Name : "<<name<<endl;
        cout << "Id : "<<id<<endl;
        cout << "Course : "<<course<<endl;
        cout << "Section : "<<section<<endl;
    }
};
int main(){
    string name , course , section;
    int id;

    Student s1(name , id , course , section);
    s1.TakeStudentDetails();
    s1.ShowStudentDetails();

    return 0;
}

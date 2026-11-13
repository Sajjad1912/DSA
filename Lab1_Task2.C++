#include<iostream>
using namespace std;
class Student
{
    private:
        string name;
        int id;
        string course;
        string section;

    public:
        void setStudent(string name, int id, string course, string )
        {
            this->name = name;
            this->id = id;
            this->course = course;
            this->section = section;
        }

        string getName()
        {
            return name;
        }
        int getId()
        {
            return id;
        }
        string getCourse()
        {
            return course;
        }
        string getSection()
        {
            return section;
        }
};
int main()
{
    Student s1;
    s1.setStudent("Sajjad",1912,"CSE","3L");
    cout<<"Name :"<<s1.getName()<<endl;
    cout<<"Id:"<<s1.getId()<<endl;
    cout<<"Course :"<<s1.getCourse()<<endl;
    cout<<"Section :"<<s1.getSection()<<endl;
}
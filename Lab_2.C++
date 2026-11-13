#include<iostream>
using namespace std;
class student{
    public:
    int id;
    string name;
    string section;
    
    student(int id, string name, string section){
        this->id = id;
        this->name = name;
        this->section = section;
    }
    void student_det(){
        cout<<id<<" " <<name<<" " <<section<<endl;
    }
};
int main()
{
    student std1(123,"Sajjad","3L");
    std1.student_det();

    student std2(432,"Sunny","3L");
    std2.student_det();
    
   /* student std1;
    std1.id = 123;
    std1.name ="Sajjad";
    std1.section = "3L";

    cout<<std1.id<<" " <<std1.name<<" " <<std1.section<<endl;*/

    return 0;
}
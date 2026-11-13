#include<iostream>
using namespace std;

class Student {
protected:
    string name;
    int id;
    string course;
    public:
    /*Student(string x, int y, string z)
    {
        name = x;
        id = y;
        course = z;
    }*/
   void setName(string x)
   {
    name = x;
   }
   string getName()
   {
    return name;
   }
    void setId(int y)
   {
    id = y;
   }
   int getId()
   {
    return id;
   }
    void setCourse(string z)
   {
    course = z;
   }
   string getCourse()
   {
    return course;
   }
};

class Section : public Student {
public:
    string section;
    /*Section(string w)
    {
        section = w;
    }*/
    void setSection(string w)
   {
    section = w;
   }
   string getSection()
   {
    return section;
   }
    void display(){
        cout<<getName() <<getId() <<getCourse() <<getSection();
    }
};

int main() {
    
    Section std1;
    std1.setName("Sajjad");
    std1.setId(1912);
    std1.setCourse("CSE");
    std1.setSection("3L");

    std1.display();
    return 0;
}

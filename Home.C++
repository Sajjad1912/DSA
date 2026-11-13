#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int id;
    string course;
    string section;

public:
    void setName(string name) {
        this->name = name;
    }

    string getName() const {
        return name;
    }

    void setId(int id) {
        this->id = id;
    }

    int getId() const {
        return id;
    }

    void setCourse(string course) {
        this->course = course;
    }

    string getCourse() const {
        return course;
    }

    void setSection(string section) {
        this->section = section;
    }

    string getSection() const {
        return section;
    }

    void takeStudentDetails() {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your ID: ";
        cin >> id;
        cin.ignore(); // Clear newline character
        cout << "Enter your course name: ";
        getline(cin, course);
        cout << "Enter your section: ";
        getline(cin, section);
    }

    void showStudentDetails() const {
        cout << "Student Details:\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Course: " << course << endl;
        cout << "Section: " << section << endl;
    }
};

int main() {
    Student s1;

    s1.takeStudentDetails();
    s1.showStudentDetails();

    return 0;
}

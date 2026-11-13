#include <iostream>

using namespace std;

class Rectangle
{
public:
    double height;
    double width;
    double length;

    /*Rectangle(double h, double w, double l)
    {
        height = h;
        width = w;
        length = l;
    }*/

    double area()
    {
        return width * length;
    }

    double volume()
    {
        return height * width * length;
    }

    void std1()
    {
        cout << "Enter the height: ";
        cin >> height;
        cout << "Enter the width: ";
        cin >> width;
        cout << "Enter the length: ";
        cin >> length;
    }
};

int main()
{
    Rectangle s1;
    s1.std1();

    cout << "The area of the rectangle is: " << s1.area() << endl;
    cout << "The volume of the rectangle is: " << s1.volume() << endl;

    return 0;
}

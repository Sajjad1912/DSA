#include <iostream>
using namespace std;
class Shape 
{
 public:
    double width;
    double length;
};
class Rectangle : public Shape 
{
 public:

    double Area() 
    {
        return width * length;
    }
};
int main() 
{
    Rectangle rect;
    rect.width = 5.0; 
    rect.length = 8.0; 

    cout << "Area of the rectangle: " << rect.Area() <<endl;

    return 0;
}

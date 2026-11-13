//Using set and 
#include<iostream>
using namespace std;
class Shape{
    public:
        double width , length;
};
class Rectangle : private Shape{
    public:
    void setWidth(double width){
        this->width = width;
    }
    double getWidth(){
        return width;
    }
    void setLength(double length){
        this->length = length;
    }
    double getLength(){
        return length;
    }
    double Area(){
        return width*length;
    }
};
int main(){
    Rectangle r1;
    r1.setWidth(3.4);
    r1.setLength(5.6);
    cout<<"Area : "<<r1.Area();
    return 0;
}
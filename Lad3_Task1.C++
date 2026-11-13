#include<iostream>
using namespace std;
class rectangle
{
    public: 
        double height;
        double width;
        double length;

    /*rectangle(double height, double width, double length)
    {
        this->height = height;
        this->width = width;
        this->length = length;
    }*/
   rectangle()
   {
    
   }
    void Volu_Of_Rectangle()
    {
        cout<<"Enter height : ";
        cin>>height;
        cout<<"Enter width : ";
        cin>>width; 
        cout<<"Enter length : ";
        cin>>length;
    }

    double Area()
    {
        return length * width;
    }
    double Volume()
    {
        return height * width * length;
    }
};
int main()
{

    rectangle s1;
    s1.Volu_Of_Rectangle();

    cout<<"Area = "<<s1.Area()<<endl;
    cout<<"Volum = "<<s1.Volume()<<endl;

    return 0;
}
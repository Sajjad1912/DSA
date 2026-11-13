#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n1 , n2 ;
    cout<<"Enter 2 number : ";
    cin>> n1 >> n2;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    float sum = n1 + n2;
    cout<<"Sum is "<<sum <<endl;

    cout<<noshowpoint;
    float sub = n1 - n2;
    cout<<"Subtaction is "<<sub <<endl;

    float dev = n1 / n2;
    cout<<"Devtion is "<<dev <<endl;

    float mul = n1 * n2;
    cout<<"Multipution is "<<mul <<endl;

    float last = n1 % n2;
    cout<<"Last number is "<<last <<endl;
}
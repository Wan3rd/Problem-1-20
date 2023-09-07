#include <iostream>

using namespace std;

int main()
{
    // Variables
    float base; 
    float height;
    float area;

    // Input
    cout<<"Enter base of the triangle: ";
    cin>>base;

    cout<<"Enter height of the triangle: ";
    cin>>height;

    // Process
    area = base * height/2;
    cout<<"\n";
    
    cout<<"The base of the triangle is "<<base<<"\n";
    cout<<"The height of the triangle is "<<height<<"\n";
    cout<<"The area of the triangle is "<<area<<"\n"; 
    return 0;
}
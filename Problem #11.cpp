#include<iostream>

using namespace std;

int main()
{
    float side1;
    float side2;
    float maxEdge;

    cout<<"Enter the first side of the triangle: ";
    cin>>side1;

    cout<<"Enter the second side of the triangle: ";
    cin>>side2;

    maxEdge = (side1 + side2) - 1;

    cout<<"The maximum third edge of the triangle is "<<maxEdge;

    return 0;

}
#include<iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    float remainder;

    cout<<"Enter first number: " ;
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    remainder = num1 % num2;

    cout<<"The remainder of "<<num1<<" and "<<num2<<" is "<<remainder<<".";

    return 0;
}
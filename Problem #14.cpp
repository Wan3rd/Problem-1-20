#include<iostream>

using namespace std;

int main()
{
    float celsius, fahrenheit;

    cout<<"Enter temperature in Celsius: ";
    cin>>celsius;

    fahrenheit = celsius* 9/5 + 32; 

    cout<<celsius<<" Celsius = "<<fahrenheit<<" Fahrenheit";

    return 0;
}   
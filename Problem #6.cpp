#include <iostream>
using namespace std;

int main()
{
    float sum;
    float difference;
    float quotient;
    float product;

    int firstNum;
    cout<<"Enter first number:";
    cin>>firstNum;
    int secondNum;
    cout<<"Enter second number:";
    cin>>secondNum;

    sum = firstNum + secondNum;
    difference = firstNum - secondNum;
    quotient = firstNum / secondNum;
    product = firstNum * secondNum;

    
    cout<<"The sum of two numbers is "<<sum<<"\n";
    cout<<"The difference of two numbers is "<<difference<<"\n";
    cout<<"The quotient of two numbers is "<<quotient<<"\n";
    cout<<"The product of two number is "<<product<<"\n";

    return 0;



}

#include<iostream>

using namespace std;

int main()
{
    int firstNum, secondNum,temp;

    cout<<"Enter first number: ";
    cin>>firstNum; 

    cout<<"Enter second number: ";
    cin>>secondNum;
    
    temp = firstNum;
    firstNum = secondNum;
    secondNum = temp;

    cout<<"The two numbers are "<<firstNum<<" and "<<secondNum;
    
    return 0;
}
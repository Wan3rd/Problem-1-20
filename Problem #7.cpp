#include<iostream>

using namespace std;

int main()
{
    int minutes, seconds;

    cout<<"Enter minute/s: ";
    cin>>minutes;

    seconds = minutes * 60;

    cout<<minutes<<" minutes is equal to "<<seconds<<" seconds.";
    return 0;
}
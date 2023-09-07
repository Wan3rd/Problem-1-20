#include<iostream>

using namespace std;

int main()
{
    float hours;
    float minutes;
    float seconds;

    cout<<"Enter hour/s: ";
    cin>>hours;

    minutes = hours * 60;
    seconds = minutes * 60 ;

    cout<<hours<< " hours is equal to "<<seconds<<" seconds"; 

    return 0;
}
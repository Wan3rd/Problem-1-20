#include<iostream>

using namespace std;

int main()
{
    float a, r, training_heart;

    cout<<"Enter your age: ";
    cin>>a;

    cout<<"Enter your Resting Heart Rate: ";
    cin>>r;

    training_heart = 0.7 * (220-a) + .3 * r ;

    cout<<"Your Training Heart Rate is "<<training_heart<<".";
    
    return 0; 
}
#include<iostream>

using namespace std;

int main()
{
    float volts;
    float current;
    float power;

    cout<<"Enter voltage(volts): ";
    cin>>volts;
    cout<<"Enter current(amps): ";
    cin>>current;

    power = volts * current;

    cout<<"Your daily electric consumption is "<<power<<" watts.";
    return 0;
}
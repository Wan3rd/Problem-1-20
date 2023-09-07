#include<iostream>

using namespace std;

int main()
{
    float bill, tipPercent, tipAmount, percent;

    cout<<"Enter the bill of the customer: ";
    cin>>bill;
    
    cout<<"Enter tip percentage: ";
    cin>>tipPercent;

    percent = tipPercent/100;
    tipAmount = bill * (tipPercent/100);

    cout<<"A "<<tipPercent<<" % "<<"tip on "<<bill<<" PHP is "<<tipAmount<<" PHP";

    return 0;
}
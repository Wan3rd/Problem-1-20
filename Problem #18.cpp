#include<iostream>
#include<cmath> 

using namespace std;

int main()
{
    float graduates, ticketsGraduate;
    cout<<"Enter number of graduates: ";
    cin>>graduates;

    ticketsGraduate = 2000 / graduates;
    cout<<"Number of Graduates: "<<graduates<<"\n";
    cout<< round(ticketsGraduate)<<" tickets will be distributed to each graduates.";

    return 0;

}

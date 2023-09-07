#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name;
    float weight, heightSquared, BMI, height;

    cout<<"Input your name: ";
    getline(cin, name);

    cout<<"Enter your weight: ";
    cin>>weight;

    cout<<"Enter your height: ";
    cin>>height;

    heightSquared = height * height;

    BMI = 703 * (weight / heightSquared);

    cout<<"Customer name: "<<name<<"\n";

    cout<<"Enter your weight in pounds: "<<weight<<"\n";

    cout<<"Enter your height in inches: "<<height<<"\n";

    cout<<"BMI is "<<BMI<<"\n";

    return 0;

}
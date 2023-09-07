#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name; 

    cout<<"What is your name? ";
    getline(cin,name);  

    cout<<"Hello "<<name<<"! Hope you are doing well today."<<endl;
    cout<<"Have a nice day ahead!";
    
    return 0;
}

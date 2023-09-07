#include <iostream>
#include <string>

using namespace std;

int main()
{
    string customerName;
    double hrsLabor, partsPrice, overallPrice, labourCost, allPrice;

    cout<<"Customer Name: ";
    getline(cin, customerName);

    cout<<"Hours of labour: ";
    cin>>hrsLabor;

    cout<<"Cost of parts and supplies: ";
    cin>>partsPrice;

    labourCost = hrsLabor * 350;

    allPrice = partsPrice + (partsPrice * .05);

    overallPrice = labourCost + allPrice;

    cout<<"\n";

    cout<<labourCost;

    cout<<"Customer Name: "<<customerName<<"\n";
    cout<<"Labour Cost: "<<hrsLabor<<"\n";
    cout<<"Parts and Supplies: "<<allPrice<<"\n";
    cout<<"Total Cost: "<<overallPrice<<"\n";

    return 0;
}
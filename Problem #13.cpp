    #include<iostream>

    using namespace std;

    int main()
    {
        double kilogram;
        double gram;
        double miligram;
        double ton;
        double pounds;    
        double ounce;

        cout<<"Enter kilogram[kg]: ";   
        cin>>kilogram;


        gram = kilogram * 1000;
        miligram = kilogram * 1000000;
        ton = kilogram / 1000;
        pounds = kilogram / 0.45359237;
        ounce = kilogram / 0.02834952;

        cout<<kilogram<<" kilogram = "<<gram<<" gram"<<"\n";
        cout<<kilogram<<" kilogram = "<<miligram<<" miligram"<<"\n";
        cout<<kilogram<<" kilogram = "<<ton<<" (metric)"<<"\n";
        cout<<kilogram<<" kilogram = "<<pounds<<" pounds"<<"\n";
        cout<<kilogram<<" kilogram = "<<ounce<<" ounce"<<"\n";

        return 0;

    }
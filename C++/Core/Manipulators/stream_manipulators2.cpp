#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x,y,z;
    x=1.12673434;y=3001.5678;z=1;

    cout<<z<<endl;

    cout<<showpoint<<z<<endl;

    cout<<noshowpoint<<z<<endl;

    cout<<setw(10)<<x<<setw(10)<<y<<endl;

    cout<<left<<setw(10)<<x<<setw(10)<<y<<endl;

    cout<<left<<setw(10)<<x<<setw(10)<<right<<y<<endl;

    cout<<x<<endl;

    cout<<setw(20)<<x<<endl;

    cout<<setfill('-')<<setw(20)<<x<<endl;

    cout<<setprecision(3)<<x<<endl;

    cout<<setprecision(8)<<y<<endl;

    cout<<setprecision(3)<<fixed<<x<<endl;

    cout<<setprecision(10)<<scientific<<y<<endl;

    cout<<setprecision(2) <<fixed<<z<<endl;

    return 0;
} 
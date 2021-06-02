#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double x,y,a,b,c,d,e,f;
    a=5.2;
    b=6.7;
    c=9.99;
    d=1.30;
    e=6.61;
    f=3.2272;

    x=1.5234;
    y=8.6432;
    double z=2;
    cout<<x<<" "<<y<<" "<<z<<"\n";
    cout<<setprecision(2)<<fixed<<setfill('-')<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<"\n"
    <<setfill(' ')<<setw(10)<<d<<setw(10)<<e<<setw(10)<<f<<endl;
    cout<<x<<" "<<y<<" "<<showpoint<<z<<"\n";

    return 0;
}
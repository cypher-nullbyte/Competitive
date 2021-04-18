#include<iostream>

using namespace std;

struct student
{
    char name[10],code;
    int age;
}s;


template<class T>
void disp(T &t)
{
    cout<<t<<"\n";
}

ostream & operator<< (ostream &out,student &s)
{
    out<<s.name<<"\n";
    out<<s.age<<"\n";
    out<<s.code<<"\n";
    return out;
}

istream & operator>> (istream &in,student &s)
{
    in>>s.name>>s.age>>s.code;
    return in;
}


int main()
{
    cin>>s.name>>s.age>>s.code;
    disp(s);
    cout<<"---------------\n";
    disp(s.name);
}
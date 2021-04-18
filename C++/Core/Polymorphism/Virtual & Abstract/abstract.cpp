#include<iostream>

using namespace std;


class Person
{
    public:
        virtual void fun()=0;
        virtual void fun(int)=0;
        Person() // Abstract calss can have a constructor....
        {
            cout<<"I'm a person\n";
        }
    
};

class Indian: public Person
{
    public:
        void fun()
        {
            cout<<"Hi I'm an Indian Person!\n";
        }
        void fun(int x)
        {
            cout<<"Hi I'm an Indian Person! [Age: "<<x<<" ]\n";
        }
};

class Delhi: public Indian
{
    public:
        void fun(int x)
        {
            cout<<"Hi I'm an Indian Person from Delhi! [Age: "<<x<<" ]\n";
        }
};

int main()
{
    Person *p=new Indian();
    p->fun(35);
    p=new Delhi();
    p->fun(25);
    p->fun(); // no method hiding in case of virtual or pure virtual methods.
    return 0;
}
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
        virtual ~Person()
        {
            cout<<"Person is dead :(!\n------------------------\n";
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
        ~Indian()
        {
            cout<<"No more in India!\n";
        }
};

class Delhi: public Indian
{
    public:
        void fun(int x)
        {
            cout<<"Hi I'm an Indian Person from Delhi! [Age: "<<x<<" ]\n";
        }
        ~Delhi()
        {
            cout<<"No more in Delhi!\n";
        }
};

int main()
{
    Person *p=new Indian();
    p->fun(35);
    delete p;
    p=new Delhi();
    p->fun(25);
    p->fun(); // no method hiding in case of virtual or pure virtual methods.
    delete p;
    return 0;
}
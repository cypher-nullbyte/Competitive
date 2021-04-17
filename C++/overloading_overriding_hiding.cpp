// Even if the signature of the derived class method is different, all the overloaded methods in base class become hidden.

// Note that the above facts are true for both static and nonstatic methods.
// There is a way mitigate this kind of issue. If we want to overload a function of a base class, 
// it is possible to unhide it by using the ‘using’ keyword.


#include<iostream>
using namespace std;

class A
{
    public:
    void f1()
    {
        cout<<"In f1 A\n";
    }
    void f2(int x)
    {
        cout<<"In f2(int) A\n";

    }
    void f2(char c)
    {
        cout<<"In f2(char) A\n";
    }
};

class B: public A
{

    public:
    void f1() //method overriding
    {
        cout<<"In f1() B\n";
    }
    void f2() //method hiding
    {
        cout<<"In f2() B\n";
    }
    using A::f2;  // it can be used to unhide f2
};


int main()
{
    B obj;
    obj.f1(); //B
    obj.f2(); //A 
    obj.f2(2); //error if we comment [using A::f2;]
    obj.f2('a'); //error if we comment [using A::f2;]


    return 0;
}
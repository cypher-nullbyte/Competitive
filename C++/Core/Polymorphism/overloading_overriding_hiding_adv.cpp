// Even if the signature of the derived class method is different, all the overloaded methods in base class become hidden.

// Note that the above facts are true for both static and nonstatic methods.
// There is a way mitigate this kind of issue. If we want to overload a function of a base class, 
// it is possible to unhide it by using the ‘using’ keyword.


#include<iostream>
using namespace std;

class A
{
    public:
    virtual void f1()
    {
        cout<<"In f1 A\n";
    }
    virtual void f2(int x)
    {
        cout<<"In f2(int) A\n";

    }
    virtual void f2(char c)
    {
        cout<<"In f2(char) A\n";
    }
    virtual void f2()=0;
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
    obj.f2(); //B 
    obj.f2(2); //error if we comment [using A::f2;]
    obj.f2('a'); //error if we comment [using A::f2;]
    cout<<"----------------------\n";
    A *a=new B();
    a->f1();
    // If I comment pure virtual 'f2()' Below will show me error, note it carefully. 
    //There is Early Binding but virtual
    
    a->f2();
    
    // functions concept /overriding works only with same signatur. 
    // Here We cannot call this child's "f2()" anyhow using  parent pointer. 
    // For that we have to define this virtual function in  Parent. Or create pure virutual function 
    // of same signature.
    
    return 0;
}
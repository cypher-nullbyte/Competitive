#include<iostream>
class B;
class A
{
  public:
    void fun(B&);
    void foo(B&);
};

class B
{
    private:
        int x;
    
    friend void A::fun(B&);
    friend void A::foo(B&);
    // if u want each member of class a to be friend make the whole class-A as friend like this-
    // friend class A;
};


void A::fun(B& b)
{std::cin>>b.x;}

void A::foo(B& b)
{std::cout<<b.x<<std::endl;}

int main()
{
    A a;
    B b;
    a.fun(b);
    a.foo(b);
    return 0;
}

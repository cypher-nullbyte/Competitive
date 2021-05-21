#include<iostream>
#include<string>
#include<exception>
using namespace std;

template<typename T>
class myexception: public exception
{
    
    public:
        T data;
        myexception(T data)
        {
            this->data=data;
        }
        T what()  throw()
        {
            return data;
        }
        //---- genral syntax
        // virtual cont char* what() const throw()
        // {
        //     //----
        // }
};

template<class T>
void play(T x)
{
    try
    {
        if(x<=0)
        {
            myexception<T> a(x);
            throw a;
        }
    }
    catch(myexception<T> e)
    {
        cout<<"Invalid Input: "<<e.what();
    }
}
int main()
{
    double x;
    cin>>x;
    play<double>(x);
    return 0;
}

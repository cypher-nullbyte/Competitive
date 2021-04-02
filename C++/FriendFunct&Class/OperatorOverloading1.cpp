#include<iostream>
class Complex
{
  private:
    int a,b;
  public:
    void setData(int x,int y)
    {
        this->a=x;
        this->b=y;
    }
    void showData()
    {
        std::cout<<"a= "<<a<<" b= "<<b<<std::endl;
    }
    ~Complex()
    {
        std::cout<<"Destructor"<<std::endl;   
    }
    Complex operator + (Complex c)
    {
        Complex sum;
        sum.a=c.a+this->a;
        sum.b=c.b+this->b;
        return sum;
    }
    Complex operator - (Complex c)
    {
        Complex sum;
        sum.a=c.a-this->a;
        sum.b=c.b-this->b;
        return sum;
    }
    Complex operator -()
    {
        Complex res;
        res.a=-this->a;
        res.b=-this->b;
        return res;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1+c2;
    c3.showData();
    // c3=-c3;
    c3=c3.operator-();
    c3.showData();
    return 0;
}

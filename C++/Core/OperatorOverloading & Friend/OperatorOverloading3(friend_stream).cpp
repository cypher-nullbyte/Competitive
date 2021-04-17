#include<iostream>
#include<string>

class Test
{
    int x;
    public:
        Test(int x=0):x{x} {}
    friend std::istream& operator >>(std::istream&, Test&);
    friend std::ostream& operator <<(std::ostream&,Test&);
    
    // another one to show we can overload + using freind too
    friend Test operator + (Test, Test);
};

std::istream& operator >> (std::istream& input,Test& obj)
{
    input>>obj.x;
    return input;
}

std::ostream& operator << (std::ostream& output,Test& obj)
{
    output<<obj.x;
    return output;
}


Test operator + (Test a, Test b)
{
    Test sum;
    sum.x=a.x+b.x;
    return sum;
}

int main()
{
    Test t1,t2,t3;
    std::cin>>t1;
    // std::cout<<t1<<std::endl;
    
    std::cin>>t2;
    // std::cout<<t2<<std::endl;
    t3=t1+t2;
    std::cout<<"Sum is: "<<t3<<std::endl;;
    return 0;
}

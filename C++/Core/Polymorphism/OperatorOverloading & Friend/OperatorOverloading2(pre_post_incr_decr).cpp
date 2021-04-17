#include<iostream>

class Integer
{
    int x;
    public:
        void setData(int a)
        {
            x=a;
        }
        void showData()
        {
            std::cout<<"x= "<<x<<std::endl;
        }
        Integer operator++() // pre increment
        {
            this->x=this->x+1;
            return *this;
        }
        Integer operator++(int) // just pass int type in arg to tell compiler that it is post increment
        {
            Integer i;
            i.x=this->x;
            this->x=this->x+1;
            return i;
        }
        Integer operator--() // pre decrement
        {
            this->x=this->x-1;
            return *this;
        }
        Integer operator--(int) // just pass int type in arg to tell compiler that it is post decrenent
        {
            Integer i;
            i.x=this->x;
            this->x=this->x-1;
            return i;
        }
};

int main()
{
    Integer i1,i2;
    i1.setData(3);
    i1.showData();
    i2=i1--;
    i2.showData();
    i1.showData();
    return 0;
}

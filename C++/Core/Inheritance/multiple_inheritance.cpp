#include<iostream>


class Youtuber  {
    private:
        int xy;
    public:
        Youtuber(int x) : xy{x}
        {
            std::cout<<"YouTuber "<<x<<"\n";
        }
        void work()
        {
            std::cout<<"Working as YouTuber\n";
        }
        void getX()
        {
            std::cout<<xy<<"\n";
        }

};
class Engineer {
    private:
        int xe;
    public:
        Engineer(int x) : xe{x}
        {
            std::cout<<"Engineer "<<x<<"\n";
        }
        void work()
        {
            std::cout<<"Working as Engineer\n";
        }
        void getX()
        {
            std::cout<<xe<<"\n";
        }
};
class cYpHeR: public Youtuber, public Engineer // order of constructor same
{

    public:
        cYpHeR(int x, int y) :Engineer(x), Youtuber(y) // has no influence on order. Order is as in class inheritence order
        {
            std::cout<<"cYpHeR "<<x<<" "<<y<<"\n";
        }
        void work()
        {
            std::cout<<"Work as Both :)\n";
            Engineer::work();
            Youtuber::work();
        }
        
};



int main()
{
    cYpHeR c(2,4);
    std::cout<<"-------------------------------------------------\n";
    c.Engineer::work();
    c.Youtuber::work();
    std::cout<<"-------------------------------------------------\n";
    c.work();
    std::cout<<"----------------Let us do Slicing---------------\n";
    // slicing is simple taking Engineer  part of object c.
    Engineer en=c;
    en.work();
    en.getX();
    return 0;
}
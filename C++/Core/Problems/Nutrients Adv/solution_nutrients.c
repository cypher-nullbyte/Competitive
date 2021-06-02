#include<iostream>
#include<exception>

using namespace std;

class nutrients
{
    private:
        int carbohydrate_content,fat_content,protein_content;
    public:
        // nutrients(){}
        // nutrients(int c,int p,int f)
        // {
        //     carbohydrate_content=c;
        //     fat_content=f;
        //     protein_content=p;
        // }
        nutrients operator + (nutrients f)
        {
            nutrients f2;
            f2.carbohydrate_content=f.carbohydrate_content+this->carbohydrate_content;
            f2.protein_content=f.protein_content+this->protein_content;
            f2.fat_content=f.fat_content+this->fat_content;
            return f2;
        }
        int& operator [] (int i)
        {
            switch(i)
            {
                case 0: 
                    return this->carbohydrate_content;
                    break;
                case 1:
                    return this->protein_content;
                    break;
                case 2:
                    return this->fat_content;
                    break;
                default:
                    throw 5; 
                    // We just need any integer exception
            }
        }
        friend std::istream& operator >>(std::istream& input, nutrients& n);
        friend std::ostream& operator <<(std::ostream& out, nutrients& n);
        
};

std::istream& operator >> (std::istream& input,nutrients &n)
{
    input>>n.carbohydrate_content>>n.protein_content>>n.fat_content;
    return input;
    
}

std::ostream& operator <<(std::ostream& out,nutrients& n)
{
    out<<n.carbohydrate_content<<endl
    <<n.protein_content<<endl
    <<n.fat_content<<endl;
    return out;
}


//--------------GIVEN START-------------------------------------------
int main()
{
	nutrients n1,n2,n3;
	int i,j,p;
	cin>>n1>>n2;
	cin>>i>>j>>p;
	n3 = n1+n2;
	cout<<n3;
	try
	{
	cout<<n1[i]<<endl;
	cout<<n1[j]<<endl;
	cout<<n1[p]<<endl;
	}catch(int k)
	{
	cout<<"Exception Caught";
	}
}
//---------------GIVEN END-------------------------------------------

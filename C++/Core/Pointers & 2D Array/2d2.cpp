// 2. Using Array of Pointers
#include<iostream>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int* arr[r];
    for(int i=0;i<r;i++)
    {
        // arr[i]=(int*)malloc(c*sizeof(int));
        arr[i]=new int[c];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>*(*(arr+i)+j);
        }
    }
    cout<<"-------------\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
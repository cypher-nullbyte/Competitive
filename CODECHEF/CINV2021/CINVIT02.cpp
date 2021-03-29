// Problem :- https://www.codechef.com/CINV2021/problems/CINVIT02

#include<iostream>
int main()
{
    int n;
    std::cin>>n;
    int UniqueNum[n]={0};
    int UniqueFlag[n]={0};
    int cnt[n]={0};
    int j=0;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i][0]>>arr[i][1];
        bool flag=true;
        for(int k=0;k<=j;k++)
        {
            if(UniqueNum[k]==arr[i][0] && UniqueFlag[k]==arr[i][1])
            {
                cnt[k]++;
                flag=false;
                break;
            }
        }
        if(flag)
        {
            UniqueNum[j]=arr[i][0];
            UniqueFlag[j]=arr[i][1];
            cnt[j]++;
            j++;
        }
    }
    int sum=0;
    for(int i=0;i<j;i++)
    {
        bool flag=true;
        for(int k=i+1;k<j;k++)
        {
            if(UniqueNum[k]==UniqueNum[i])
            {
                flag=false;
                
                if(UniqueFlag[i]==-1 || UniqueFlag[k]==-1)
                     continue;
                
                if(cnt[k]>cnt[i])
                {
                    int m=UniqueFlag[k]==0 ? -1 : 1;
                    int temp=m*UniqueNum[k]*cnt[k];
                    // std::cout<<temp<<"\t";
                    sum+=temp;
                }
                else if(cnt[k]<cnt[i])
                {
                    int m=UniqueFlag[i]==0 ? -1 : 1;
                    int temp=m*UniqueNum[i]*cnt[i];
                    // std::cout<<temp<<"\t";
                    sum+=temp;
                }
                else
                {
                    int temp=UniqueNum[i]*cnt[i];
                    // std::cout<<temp<<"\t";
                    sum+=temp;
                }
                UniqueFlag[i]=-1;
                UniqueFlag[k]=-1;
                continue;
            }
        }
        if(flag==true && UniqueFlag[i]!=-1)
        {
            int m=UniqueFlag[i]==0 ? -1 : 1;
            int temp=m*UniqueNum[i]*cnt[i];
            // std::cout<<temp<<"\t";
            sum+=temp;
        }
    }
   std::cout<<sum;
    return 0;
}

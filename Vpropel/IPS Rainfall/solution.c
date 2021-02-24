#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int rain;
    char *date;
}RainData;

void printmonthWise(RainData *rd,int n)
{
    //dd-mm-yyyy
    int total[12]={0};
    char *c[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    for(int i=0;i<n;i++)
    {
        char temp[3];
        temp[0]=rd[i].date[3];
        temp[1]=rd[i].date[4];
        temp[2]='\0';
        
        int month=atoi(temp)-1;
        total[month]+=rd[i].rain;
    }
    for(int i=0;i<12;i++)
    {
        if(total[i]>0)
            printf("%s %d",c[i],total[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    RainData * rd=(RainData *)calloc(n,sizeof(RainData));
    for(int i=0;i<n;i++)
    {   
        rd[i].date=(char *)malloc(11*sizeof(char));
        scanf("%s",(rd+i)->date);
        scanf("%d",&(rd+i)->rain);
    }
    printmonthWise(rd,n);
    return 0;
}
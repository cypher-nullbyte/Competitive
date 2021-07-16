// 2. Using Array of Pointers
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int* arr[r];
    for(int i=0;i<r;i++)
    {
        arr[i]=(int*)malloc(c*sizeof(int));
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",(*(arr+i)+j));
        }
    }
    prinf("------------------\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
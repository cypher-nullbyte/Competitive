#include<iostream>

using namespace std;

typedef struct{
    int x1,y1,x2,y2;
    int status=0;
}line;

typedef struct{
    int x1,y1,x2,y2;
}vline;

typedef struct{
    int x1,y1,x2,y2;
}hline;

int main()
{
    int n;
    cin>>n;
    line lines[n];
    int h_count=0;
    int v_count=0;
    for(int i=0;i<n;i++)
    {
        cin>>lines[i].x1>>lines[i].y1>>lines[i].x2>>lines[i].y2;
        if(lines[i].x1==lines[i].x2) 
        {
            lines[i].status=1;
            v_count++;
        }
        else if(lines[i].y1==lines[i].y2) 
        {
            lines[i].status=2;
            h_count++;
        }
    }
    hline hlines[h_count];
    vline vlines[v_count];
    int v_idx=0;
    int h_idx=0;
    for(int i=0;i<n;i++)
    {
        if(lines[i].status==1)
        {
            vlines[v_idx].x1=lines[i].x1;
            vlines[v_idx].x2=lines[i].x2;
            vlines[v_idx].y1=lines[i].y1;
            vlines[v_idx].y2=lines[i].y2;
            v_idx++;
        }
        else if(lines[i].status==2)
        {
            hlines[h_idx].x1=lines[i].x1;
            hlines[h_idx].x2=lines[i].x2;
            hlines[h_idx].y1=lines[i].y1;
            hlines[h_idx].y2=lines[i].y2;
            h_idx++;
        }
    }
    h_idx=0;
    v_idx=0;
    int count=0;
    for(int i=0;i<v_count;i++)
    {
        for(int j=0;j<h_count;j++)
        {
           for(int k=0;k<h_count;k++)
           {
               if(j==k) continue;
               bool chk1=false;
               bool chk2=false;
               if(vlines[i].x1==hlines[j].x1 && vlines[i].y1==hlines[j].y1) chk1=true;
               if(!chk1 && vlines[i].x1==hlines[j].x2 && vlines[i].y1==hlines[j].y2) chk1=true;
               if(!chk1 && vlines[i].x1==hlines[k].x1 && vlines[i].y1==hlines[k].y1) chk1=true;
               if(!chk1 && vlines[i].x1==hlines[k].x2 && vlines[i].y1==hlines[k].y2) chk1=true;
               
               if(vlines[i].x2==hlines[j].x1 && vlines[i].y2==hlines[j].y1) chk2=true;
               if(!chk2 && vlines[i].x2==hlines[j].x2 && vlines[i].y2==hlines[j].y2) chk2=true;
               if(!chk2 && vlines[i].x2==hlines[k].x1 && vlines[i].y2==hlines[k].y1) chk2=true;
               if(!chk2 && vlines[i].x2==hlines[k].x2 && vlines[i].y2==hlines[k].y2) chk2=true;
               
               if(chk1 && chk2) count++;
           }
        }
    }
    cout<<count/2;
    
}


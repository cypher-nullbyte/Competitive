//https://www.hackerrank.com/challenges/operator-overloading/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix
{
    
    public:
        vector<vector<int>> a;
    Matrix(){}
    // Matrix(Matrix &m)
    // {
    //      for(int i=0;i<a.size();i++)
    //     {
    //         vector<int> temp;
    //         for(int j=0;j<a[i].size();j++)
    //         {
    //             temp.push_back(m.a[i][j]);
    //         }
    //         a.push_back(temp);
    //     }
    // }
    Matrix& operator+(Matrix &y)
    {
        Matrix *result=new Matrix();

        for(int i=0;i<a.size();i++)
        {
            vector<int> temp;
            for(int j=0;j<a[i].size();j++)
            {
                int x=(int)(a[i][j]+y.a[i][j]);
                temp.push_back(x);
            }
            result->a.push_back(temp);
        }
        return *result;
    }  
    
};


int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int arr[5][5],i,j,k,l;
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           cin>>arr[i][j];
       }
   }
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           if(arr[i][j]==1)
           {
              cout<<abs(i-2)+abs(j-2);
           }
       }
   }
}


#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
void show(/*int arr[],*/int x)
{
    int arr[x];
    int i;
    cout<<"taking input:";
   for(i=0;i<x;i++)
   {
       cin>>arr[i];
   }
    cout<<"showing output:";
    for(i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
    int max=arr[0];
    for(i=0;i<x;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<endl<<max;
}
int main()
{
    int i,n;
    cout<<"enter array size:";
    cin>>n;
   //int arr[n];
  /* cout<<"taking input:";
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }*/
   show(n);
   getch();
}


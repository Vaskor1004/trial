#include<iostream>
#include<conio.h>
#include<cmath>
#include<cstring>
using namespace std;
 int main()
 {
     int n,fl,sl,tl,i;
     cout<<"enter array size:";
     cin>>n;
     int arr[n];
     cout<<"taking input:";
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int maxv=0;
     int fre;
     int frev;
    for(i=0;i<n;i++)
    {
         fre=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
               {
                   fre++;
               }
        }
        if(fre>=maxv)
        {
            maxv=fre;
           frev=arr[i];
        }
    }
    cout<<"number is "<<frev<<" "<<"frequence is "<<maxv;
    getch();
 }

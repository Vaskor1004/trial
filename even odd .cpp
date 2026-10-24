#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int n,m,i,sum1=0,sum2=0,result;
    cout<<"enter array size:";
    cin>>n;
    int a1[n];
    cout<<"taking input:";
    for(i=0;i<n;i++)
    {
        cin>>a1[i];
    }
     for(i=0;i<n;i++)
    {
        sum1=sum1+a1[i];
    }
    int a2[n-1];
    cout<<"taking input of 2nd array:";
    for(i=0;i<n-1;i++)
    {
        cin>>a2[i];
    }
    for(i=0;i<n-1;i++)
    {
        sum2=sum2+a2[i];
    }
    result=sum1-sum2;
    cout<<result;
    getch();
}

#include<iostream>
#include<conio.h>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"printing reverse:";
    int *p=&arr[0];
    for(i=n-1;i>=0;i--)
    {
        cout<<*(p+i)<<" ";
    }
    getch();
}

#include<iostream>
#include<conio.h>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    getch();
}

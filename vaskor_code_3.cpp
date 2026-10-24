#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()

{
    int n,i,fl,sl;
    cout<<"enter any number:";
    cin>>n;
    int arr[n];
    cout<<"taking input:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<<"showing output:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    fl=sl=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(fl<arr[i])
        {
            sl=fl;
            fl=arr[i];
        }
        else if(sl<arr[i])
        {
            sl=arr[i];
        }
    }
    cout<<endl;
    cout<<"desire output:";
    for(i=0;i<n;i++)
    {
        if(arr[i]==sl||arr[i]==fl)
        {
            continue;
        }
        cout<<arr[i]<<" ";
    }
    getch();
}














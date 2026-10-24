#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int i,j,k,count,f,n;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    cout<<"taking input:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        f=0;
        for(k=0;k<i;k++)
        {
            if(arr[i]==arr[k])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            continue;
        }
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>=1)
        {
            cout<<arr[i]<<" ";
        }
    }
    getch();
}

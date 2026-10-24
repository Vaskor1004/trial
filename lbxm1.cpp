#include<iostream>
using namespace std;
int main()
{
    int n,even=0,odd=0;
    cout<<"enter size:";
    cin>>n;
    int *arr=new int[n];
    cout<<"taking input:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *p=arr;
    cout<<"showing output:";
    for(int i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
    cout<<endl<<"Even numbers are:";
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
            even+=arr[i];
        }
    }
    cout<<endl<<"Even sum:"<<even<<endl;
    cout<<"Odd numbers are:";
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<" ";
            odd+=arr[i];
        }
    }
    cout<<endl<<"Odd sum:"<<odd<<endl;
    return 0;
}

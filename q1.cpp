#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter how much number you want:";
    cin>>n;
    int arr[n];
    cout<<"taking numbers:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"numbers are:";
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            cout<<arr[i]<<" ";
            sum+=arr[i];
        }
    }
    cout<<endl;
    cout<<"sum of odd number:"<<sum;
    return 0;
}

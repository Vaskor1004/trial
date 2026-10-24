
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    cout<<"taking input:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *p=&arr[0];
    int *q=&sum;
    for(i=0;i<n;i++)
    {
        *q+=*(p+i);
    }
    cout<<"sum is:"<<*q<<endl;
    return 0;
}

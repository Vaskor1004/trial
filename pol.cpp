#include<iostream>
using namespace std;
int main()
{
    int n,i,maxv1=0,minv1=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max,min;
    max=min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            maxv1=i;
        }
        else if(arr[i]<=min)
        {
            min=arr[i];
            minv1=i;
        }
    }
   int result=(maxv1)+(n-1-minv1);
   if(maxv1>minv1)
    cout<<result-1;
    else
        cout<<result;
    return 0;
}

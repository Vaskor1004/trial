#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,even=0,odd=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
           even+=arr[i];
        }
        else
        {
            odd+=arr[i];
        }
    }
    if(n%2==0)
    {
        cout<<odd<<" "<<even<<endl;
    }
    else
    {
        cout<<even<<" "<<odd<<endl;
    }
    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,min=INT_MIN,fact=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int s=arr[0]+1;
    for(int i=1;i<n;i++){
        fact*=arr[i];
    }
    cout<<fact*s<<endl;
    }
    return 0;
}

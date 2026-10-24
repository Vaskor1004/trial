#include<iostream>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=m){
            sum+=1;
        }
        if(arr[i]>m){
            sum+=2;
        }
    }
    cout<<sum<<endl;
    return 0;
}

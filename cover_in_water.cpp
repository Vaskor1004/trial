#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x,y,count;
    cin>>x>>y;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    short store=0;
    sort(arr,arr+x);
    for(int i=0;i<x-1;i++){

        i++;
    }
    cout<<store<<endl;
    //cout<<x-store<<endl;
}

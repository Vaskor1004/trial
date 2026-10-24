#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    int a=1;
    bool flag=false;
    while(a<n){
        a=arr[a]+a;
        if(a>t){
            break;
        }
        else if(a==t){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}

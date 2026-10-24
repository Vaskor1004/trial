#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,flag=0,m,j;
    cin>>n>>m;
    if(n<=1){
        cout<<"NO"<<endl;
    }
    else{
    for(int i=2;i<=(sqrt(n));i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag<1){
            flag=0;
        for( j=n+2;j<=INT_MAX;j=j+2){
            for(int i=2;i<=(sqrt(j));i++){
        if(j%i==0){
            flag=1;
            break;
        }
    }
        }
    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }
}
    if(flag<1&&j==m){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}

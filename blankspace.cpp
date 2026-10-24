#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--){
    int n,count=0,max=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
         if(a[i]==1){
            count=0;
            continue;
         }
        if(a[i]==0){
            count++;
         }
        if(count>max){max=count;}
    }
    cout<<max<<endl;
    }

}

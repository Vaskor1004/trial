#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,count=1;
    short s=0;
    cout<<"enter size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1])count++;
        else{
            if(count>1){
                    s=1;
                cout<<"Duplicate number is "<<a[i]<<" Repeated for "<<count<<" Times"<<endl;
            }
           count=1;
        }
    }
    if(count>1){
        cout<<"Duplicate number is "<<a[n-1]<<" Repeated for "<<count<<" Times"<<endl;
    }
    if(s<1){
        cout<<"NO repeated element"<<endl;
    }
}

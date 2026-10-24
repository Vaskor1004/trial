#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,index=0;
     int a[20];
    cout<<"enter the size:";
    cin>>n;
    if(n>20){
            cout<<"out of index";
    }
    else{
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int num;
    cout<<"enter the number:";
    cin>>num;
    for(int i=0;i<n;i++){
        if(a[i]>num){
            index=i;
            break;
        }
        else{
            index=-1;
        }
    }
    if(index==-1){
        index=n;
    }
    else{
    for(int i=n;i>index;i--){
        a[i]=a[i-1];
    }
    }
    a[index]=num;
    n++;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    }

}

#include<iostream>
using namespace std;
int main()
{
    int a[20];
    int n;
    cout<<"enter size:";
    cin>>n;
    if(n>20){
        cout<<"error!!  --------";
        return 0;
    }
    else{
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int index,num;
    cout<<endl<<"enter the index number:";
    cin>>index;
    cout<<"enter the number:";
    cin>>num;
    if(index==n){
        a[index]=num;
        n++;
    }
    else if((index>=0)&& (index<n)){
    for(int i=n;i>index;i--){
        a[i]=a[i-1];
    }
    a[index]=num;
    n++;
    }
    else{
        cout<<"out of index bounds------------------";
        return 0;
    }
    cout<<"After array insertion:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    }
}

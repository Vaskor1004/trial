#include<iostream>
using namespace std;
int main(){
    int  n,i,j,k=0;
    cout<<"enter the size:";
    cin>>n;
    int a[n];
    for( i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"1st array------------------"<<endl;
    for( i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int  m;
    cout<<endl;
    cout<<"enter the size:";
    cin>>m;
    int b[m];
    for( j=0;j<m;j++){
        cin>>b[j];
    }
    cout<<endl;
    cout<<"2nd array------------------"<<endl;
    for( j=0;j<m;j++){
        cout<<b[j]<<" ";
    }
    i=0,j=0;
    int s=m+n;
    int c[s];
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<m){
        c[k++]=b[j++];
    }
    cout<<endl;
    cout<<"finishing array------------------"<<endl;
    for(int k=0;k<s;k++){
        cout<<c[k]<<" ";
    }
}

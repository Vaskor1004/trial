#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m,count=0;
    cout<<"Enter the searching element:";
    cin>>m;
    for(int i=0;i<n;i++){
        if(a[i]==m){count++;}
    }
    if(count==0){
        cout<<"Element not found!"<<endl;
    }
    else{cout<<count<<" Times repeated "<<endl;}
}

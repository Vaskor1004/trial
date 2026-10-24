#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the size of 1st array:";
    cin>>n;
    int a[n];
    cout<<"enter the size of 2nd array:";
    cin>>m;
    int b[m];
    cout<<"Taking input for 1st array--------------------"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl<<"Taking input for 2 nd array--------------"<<endl;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int c[n+m];
    int i=0;
    while(i<(n+m)){
        for(int j=0;j<n;j++){
            c[i++]=a[j];
        }
        for(int k=0;k<m;k++){
            c[i++]=b[k];
        }

    }
    cout<<"-----------------------------"<<endl;
    cout<<"Output of marge array: ";
    for(int i=0;i<(n+m);i++){
        cout<<c[i]<<" ";
    }
    cout<<"-----------------------------"<<endl;
    cout<<endl<<"reverse is:";
    for(int i=((n+m)-1);i>=0;i--){
        cout<<c[i]<<" ";
    }
    cout<<endl;

}

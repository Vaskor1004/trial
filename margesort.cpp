#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    int m;
    cout<<"Enter the 2nd size:";
    cin>>m;
    int b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int c[m+n];
    int j=0,k=0;
    int i=0;
    while(i<n && j<m){
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<n){
        c[k++]=c[i++];
    }
    while(j<m){
        c[k++]=b[j++];
    }

   for( i=0;i<(n+m);i++){
        cout<<c[i]<<" ";
    }

}

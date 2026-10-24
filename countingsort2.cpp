#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>x){
            x=a[i];
        }
    }
    int count[x+1];
    for(int i=0;i<=x;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        ++count[a[i]];
    }
   /* for(int i=1;i<=x;i++){
        count[i]=count[i]+count[i-1];
    }
    int b[n];
    for(int i=n-1;i>=0;i--){
        b[--count[a[i]]]=a[i];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }*/
    for(int i=0;i<=x;i++){
        if(count[i]>0){
            int j=1;
            while(j<=count[i]){
                cout<<i<<" ";
                j++;
            }
        }
    }
}

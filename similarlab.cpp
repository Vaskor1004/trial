#include<iostream>
using namespace std;
int main()
{
    int n,count,m;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    cout<<"Enter the size of the 2nd array:";
    cin>>m;
    int b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    if(m<n){
        for(int i=0;i<m;i++){
                count=0;
            for(int j=0;j<n;j++){
                if(a[i]==b[j]){
                    count++;
                    if(count==1){
                        cout<<a[i]<<" ";
                    }
                }
            }
        }
    }
    else if(n<m){
        for(int i=0;i<n;i++){
                count=0;
            for(int j=0;j<m;j++){
                if(a[i]==b[j]){
                    count++;
                    if(count==1){
                        cout<<a[i]<<" ";
                    }
                }
            }
        }
    }
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int m;
    cout<<"enter the size:";
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<arr2[i]<<" ";
    }
    int c[m+n];
    int k=0;
    bool b;
    for(int i=0;i<n;i++){
        c[k++]=arr[i];
    }
    for(int j=0;j<m;j++){
            b=false;
        for(int i=0;i<n;i++){
            if(arr2[j]==arr[i]){
                b=true;
                break;
            }
        }
        if(b==false){
        c[k++]=arr2[j];
        }
    }
    cout<<endl;
    for(int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }

}

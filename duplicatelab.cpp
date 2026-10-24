#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    bool b;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
            b=false;
        for(int k=0;k<i;k++){
            if(a[k]==a[i]){
                    count++;
                b=true;
                break;
            }
        }
    }
    if(count==0){
        cout<<"Array already unique!"<<endl;
    }
    else{
         for(int i=0;i<n;i++){
            b=false;
        for(int k=0;k<i;k++){
            if(a[k]==a[i]){
                b=true;
                break;
            }
        }
     if(!b){
        cout<<a[i]<<" ";
    }
  }
     }
}

#include<iostream>
using namespace std;
int main()
{
    int n,count;
    bool b;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
            b=false;
        for(int k=0;k<i;k++){
            if(a[i]==a[k]){
                b=true;
                break;
            }
        }
        if(!b){
                count=1;
    for(int j=0;j<n;j++){
        if(a[i]==a[j]){
            count++;
        }
    }
    cout<<a[i]<<"Repeated for "<<count-1<<" Times "<<endl;
        }

    }
}

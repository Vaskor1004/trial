#include<iostream>
using namespace std;
int main()
{
    int n,count;
    cout<<"enter size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool b;
    short s=0;
    for(int i=0;i<n;i++){
            b=true;
        for(int k=0;k<i;k++){
            if(a[k]==a[i]){
                b=false;
                break;
            }
        }
        if(b){
                count=1;
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    count++;
                }
            }
        if(count>1){
               s=1;
            cout<<"Duplicate number is :"<<a[i]<< " "<<"Repeated for "<<count<<" "<<"Times"<<endl;
        }
        }
    }
    if(s<1){
        cout<<"There is no Duplicate number "<<endl;
    }
}

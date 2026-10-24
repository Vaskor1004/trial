#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    short n,sum=0,k,a;
    cin>>n;
    bool stop=false;
    for(int i=1;i<=9 && !stop;i++){
            k=0;
            a=0;
        for(int j=i;j<i+4;j++){
            k=(k*10)+i;
            if(k==n){
                 sum+=++a;
                stop=true;
                break;
            }
            else{
                sum+=++a;
            }
        }
    }
    cout<<sum<<endl;
    }
}

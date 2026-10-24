#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int s,sum=0;
        cin>>s;
        int a[s];
        for(int i=0;i<s;i++){
               cin>>a[i];
               sum+=a[i];
        }
        if(sum%2==0){
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}
    }
}

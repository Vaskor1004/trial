#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,sum=0,cal=0;
    cin>>n;
    if(n%4!=0){
        cout<<"NO";
    }
    else{
            cout<<"YES"<<endl;
        for(int i=0;i<(n/2);i++){
            cout<<2*(i+1)<<" ";
            sum+=(2*(i+1));
        }
        for(int j=0;j<((n/2)-1);j++){
            cout<<(2*j)+1<<" ";
            cal+=((2*j)+1);
        }
        cout<<sum-cal;
    }
    cout<<endl;
    }
    return 0;
}

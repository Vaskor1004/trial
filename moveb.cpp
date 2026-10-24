#include<iostream>
using namespace std;
int main()
{
    int n,s=0,t=0;
    cin>>n;
    for(int i=1;i<=n;i++){
       s+=(i*(i+1))/2;
       if(s>n){break;}
       else{t++;}
    }
     cout<<t<<endl;
}

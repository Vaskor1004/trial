#include<iostream>
using namespace std;
int main()
{
    int n,r,s,sum=0;
    cin>>n;
    while(n>0){
       r=n%10;
       sum=(sum*10)+r;
       n=n/10;
    }
    int a=sum;
    r=0;
    while(a>0){
      r=a%10;
    if(r==9){
        cout<<9;
        a/=10;
    }
    else{
      s=(9-r);
      if(s>r){
        cout<<r;
      }
      else{
        cout<<s;
      }
      a/=10;
    }
    }
    return 0;
}

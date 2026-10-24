//Yet Another Two Integers Problem
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--){
     int a,b,count;
     cin>>a>>b;
     int d=abs(a-b);
     if(a<b){
     if(d>10)
     {
          count=0;
         while((b-a)>9)
         {
             a=a+10;
             count++;
         }
     }
     if(a==b)
        cout<<count<<endl;
     else
       cout<<count+1<<endl;
 }
    else if(a>b){
     if(d>10)
     {
          count=0;
         while((a-b)>9)
         {
             a=a-10;
             count++;
         }
     }
     if(a==b)
        cout<<count<<endl;
     else
        cout<<count+1<<endl;
    }
    else if(d==0)
        cout<<0<<endl;
    else
       cout<<1<<endl;
}
    return 0;
}



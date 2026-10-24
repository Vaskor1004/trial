#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
   int n,count=0,j,i=0;
   cin>>n;
   for( i=1; i<=n; i++){
    count=i;
    j=1;
    while(j<=count){
        cout<<"(";
        j++;
    }
    while(count--){cout<<")";}
   for(j= i*2+1; j<=n*2; j++){
    if(j%2==0){cout<<")";}
    else{cout<<"(";}
   }
   cout<<endl;
   }
    }
}

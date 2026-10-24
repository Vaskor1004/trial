#include<iostream>
using namespace std;
int main()
{
    //ques:-18
    int n,r,sum=0;
    cout<<"enter number:";
    cin>>n;
    while(n>0){
       r=n%10;
       if(r>sum){
        sum=r;
       }
       n=n/10;
    }
    cout<<sum<<endl;
    return 0;
}

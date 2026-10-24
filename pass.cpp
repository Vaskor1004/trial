#include<iostream>
using namespace std;
int main()
{
    double n;
    cout<<"Enter your password:";
    cin>>n;
    int count=0;
    bool b=false;
    for(double i=1000;i<=99999;i++){
        if(i==n){
                b=true;
            cout<<"passsword cracked!!!!!!!!!!!!!!!!!!!!!!"<<endl;
            cout<<"Password is :"<<n<<endl;
            break;
        }
       cout<<i<<endl;
       count++;
    }
    cout<<count<<endl;
    if(!b){cout<<"not found"<<endl;}
}

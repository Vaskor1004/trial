#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,count=0;
    cin>>n;
    int temp = n;
    int i = 0;
    while(temp > 0) {
        count++;
        temp = temp / 10;

    }
    int digit[count];
    temp=n;
     while(temp > 0) {
        digit[i] = temp % 10;
        temp = temp / 10;
        i++;
    }
    bool ch=false;
    int b=digit[1];
    if(b%2==0){
    for(int j=0;j<=b/2;j++){
        if(j==digit[0]){
            ch=true;
            break;
        }
    }
    if(ch){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    }
    else{cout<<"NO"<<endl;}
    }
}

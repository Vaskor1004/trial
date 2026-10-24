#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a;
    cin>>a;
    string s;
    cin>>s;
    bool b=false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            b=true;
            break;
        }
    }
    if(b==true){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    }
}

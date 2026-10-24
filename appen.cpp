#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--){
    int n,store;
    cin>>n;
    store=n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='0' && s[n-1-i]=='1'){
            store=store-2;
        }
        else if(s[i]=='1' && s[n-1-i]=='0'){
            store=store-2;
        }
        else{break;}
    }
    if(store<0){store=0;}
    cout<<store<<endl;
    }
}

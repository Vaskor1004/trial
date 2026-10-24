#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    bool flag=false;
    string s;
    cin>>s;
    int d=s.length();
    if(d%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=0;i<(d/2);i++){
            if(s[i]!=s[(d/2)+i]){
                flag=true;
            break;
            }
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    }
    return 0;
}

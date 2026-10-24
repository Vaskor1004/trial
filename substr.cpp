#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    if(s.length()==2){
        cout<<s<<endl;
    }
    else{
    cout<<s[0];
    int i=1;
   do{
        if(s[i]==s[i+1]){
            cout<<s[i];
            i+=2;
        }
        else{
            cout<<s[i];
            i++;
        }
    } while(i<s.length()-1);
    cout<<s[s.length()-1]<<endl;
    }
    }
}

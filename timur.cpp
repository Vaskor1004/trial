#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
            bool flag=false;
        for(int k=0;k<i;k++){
            if(s[k]==s[i]){
                flag=true;
            }
        }
        if(flag){
            count++;
        }
        else{
            count+=2;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    short a,b;
    cin>>a>>b;
    string s;
    cin >> s;
    bool k=false;
    int freq[26] = {0};

    for (char ch : s) {
        freq[ch - 'a']++;
    }
    short c=a-b;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
           if(freq[i]>=c){
            k=true;
            break;
           }
           else if(freq[i]%2==0){
            c-=freq[i];
           }
        }
    }
    if(k==true){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    }
}


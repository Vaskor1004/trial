#include<iostream>
#include<string>
using namespace std;

int main() {
    bool flag=false;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
            if(s[i]>='a' && s[i]<='z'){
                if(!(s[i+1]>='A'&&s[i+1]<'Z'))
                    cout<<s<<endl;
            }
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            /*s[i] = s[i] + 32;
            cout<<s[i];*/
            bool flag=true;
            continue;
        }
        else if(flag==true){
            s[i]=s[i]+32;
            cout<<s[i];
        }
        else if(flag==false){
                if(s[i]>='a'&&s[i]<='z'){
                    cout<<s[i]-32;
                }
                else{
                    s[i]=s[i]+32;
                    cout<<s[i];
                }
        }

    }

    return 0;
}

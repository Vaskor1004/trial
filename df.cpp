#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='W'||s[i]=='U'||s[i]=='B')
        {
            i++;
            continue;
        }
        else{
        cout<<s[i];
        }
        i++;
    }
    return 0;
}

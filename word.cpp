#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[30];
    cin.getline(s,30);
    int i=0,lw=0,up=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a'&&s[i]<='z')lw++;
        else up++;
        i++;
    }
    if(lw>=up)cout<<strlwr(s);
    else cout<<strupr(s);
}

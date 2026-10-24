#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char t[100];
    char s[100];
    cin.getline(s,100);
    cin.getline(t,100);
    strrev(t);
    int i=0,j=0,d=0;
    while((s[i]!='\0')||(t[j]!='\0'))
    {
        if(s[i]!=t[j])
        {
            d=-1;
            break;
        }
        i++;
        j++;
    }
    if(d==-1)cout<<"NO";
    else cout<<"YES";
    return 0;
}

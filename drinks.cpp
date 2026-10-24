//ultra fast
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[30];
    cin.getline(s,30);
    char t[30];
     cin.getline(t,30);
    int i=0,j=0;
    while((s[i]!='\0')||(t[j]!='\0'))
    {
        if(s[i]!=t[j])
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
        i++;
        j++;
    }
    return 0;
}

#include<iostream>
#include<conio.h>
//#include<cstring>
#include<string>
using namespace std;
int main()
{
    int i,n,flag;
    cout<<"enter size:";
    cin>>n;
    string s[n];
    cout<<"enter 1st name:";
    for(i=0;i<n;i++){
    cin>>s[i];
    }
    string ch;
    cout<<"enter your chice:";
    getline(cin,ch);
    for(i=0;i<n;i++)
    {
        flag=0;
        if(s[i]==ch)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
        cout<<"avaiable";
    else
        cout<<"not";

    getch ();
}

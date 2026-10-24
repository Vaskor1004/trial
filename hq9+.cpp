#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0,d;
    while(s[i]!='\0')
    {
        d=0;
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            cout<<"YES"<<endl;
            break;
        }
       /* else{
           d=-1;
        }
         i++;*/
    }
   /* if(d==-1)*/cout<<"NO"<<endl;
    return 0;
}

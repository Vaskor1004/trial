#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{
    char ch[10];
    cout<<"enter string:";
    cin>>ch;
    int n=strlen(ch);
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j){
                continue;
            }
            for(k=0;k<3;k++)
            {
                if(k==i||k==j)
                {
                    continue;
                }
                cout<<ch[i]<<ch[j]<<ch[k]<<" ";
            }
        }
    }
    getch();
}

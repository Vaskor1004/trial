#include<iostream>
#include<conio.h>
#include<cmath>
#include<string.h>
using namespace std;
int main()
{
    int row,col,n,a=1;
    cout<<"enter any number:";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
           cout<<a;
           a++;
        }
       cout<<endl;
    }
    getch();
}

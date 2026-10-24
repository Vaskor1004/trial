#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    int n,count,max=0,flag=1,j,r=0,k=0;
    cin>>n;
    while(max!=1){
    n++;
    r=0;
    k=0;
    max=0;
    string s=to_string(n);
   while(s[k]!='\0')
   {
   r++;
   k++;
   }
    for(int i=0;i<r;i++)
    {
    count=0;
    for(int j=0;j<r;j++)
    {
     if(s[i]==s[j])
     {
     count++;
     }
    }
    if(count>max)
    {
    max=count;
    }
    }

     }
     cout<<n;
    return 0;
}

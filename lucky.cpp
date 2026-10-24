
#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   char ch[n+1];
   cin.ignore();
   cin.getline(ch,(n+1));
   int i=0,a=0,d=0;
   while(ch[i]!='\0')
   {
       if((ch[i]=='A'))a++;
       else if((ch[i]=='D'))d++;
       i++;
   }
   if(a>d)cout<<"Anton";
   else if(d>a)cout<<"Danik";
   else cout<<"Friendship";
   return 0;
}

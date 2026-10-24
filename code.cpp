#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   int n;
   cin>>n;
   while(n--){
   char ch[30];
   cin>>ch;
   int count=0;
   int d=strlen(ch);
   if(d>=10){
   for(int j=1;j<d-1;j++)
   {
       count++;
   }
   cout<<ch[0]<<count<<ch[d-1];
   cout<<endl;
   }
   else
   {
       int i=0;
   while(ch[i]!='\0')
   {
       cout<<ch[i];
       i++;
   }
   cout<<endl;
 }
}
    return 0;
}


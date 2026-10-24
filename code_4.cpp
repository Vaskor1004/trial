#include<iostream>
#include<conio.h>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main()
{
  char s[30];
  cout<<"enter any charecter:";
  gets(s);
  int i=0;
  while(s[i]!='\0')
  {
      if(s[i]>=65&&s[i]<=90)
      {
          s[i]=s[i]+32;
      }
      i++;
  }
  cout<<s;
   getch();
}












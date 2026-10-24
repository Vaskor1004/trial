
#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
  float n,i,sum=0,result=0;
  cout<<"enter any number:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
      sum+=i;
       result=result+sum;
  }
  cout<<result;
   getch();
}

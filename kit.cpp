#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int n,r,sum=0;
   cout<<"enter number:";
   cin>>n;
   int rem=n%10;
   while(n!=0)
   {
       //sum=0;
       r=n%10;
       sum=(sum*10)+r;
       n=n/10;
   }
   int s=sum%10;
   cout<<"sum of 1st and last number:"<<s+rem;
    getch();
}

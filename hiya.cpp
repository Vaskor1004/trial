#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
  int n,i;
  cout<<"enter array size:";
  cin>>n;
  int arr[n];
  cout<<"enter the element of array"<<endl;
  for(i=0;i<n;i++)
  {
      cout<<"element "<<(i+1)<<":";
      cin>>arr[i];
  }
  int target,f=0;
  cout<<"enter your finding value:";
  cin>>target;
   for(i=0;i<n;i++)
   {
       if(arr[i]==target)
       {
           f++;
       }
   }
   cout<<f;
   getch();
}

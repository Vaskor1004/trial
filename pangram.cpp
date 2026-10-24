#include<iostream>
#include<string>
using namespace std;
int main()
{
   int n,index=0,sum=0;
   cout<<"enter siz:";
   cin>>n;
   int *p=new int[n];
   for(int i=0;i<n;i++)
   {
       cin>>p[i];
   }
   for(int j=0;j<n;j++)
   {
       sum+=p[j];
   }
   int max=p[0];
   for(int i=0;i<n;i++)
   {
       if(p[i]>max)
       {
           max=p[i];
           index=i;
       }
   }
   cout<<max<<endl;
   cout<<index<<endl;
   cout<<sum<<endl;
   delete []p;
   p=nullptr;
}

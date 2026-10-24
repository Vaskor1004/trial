#include<iostream>
using namespace std;
int main()
{
   int *p,*q;
   p=new int[5];
   for(int i=0;i<5;i++){
    cin>>p[i];
   }
   for(int i=0;i<5;i++){
    cout<<p[i]<<" ";
   }
  /* int a[5];
   for(int i=0;i<5;i++){
    cin>>a[i];
   }
   for(int i=0;i<5;i++){
    cout<<a[i]<<" ";
   }*/
   q=new int[10];
   for(int i=0;i<5;i++){
    q[i]=p[i];
   }
   delete [] p;
   p=q;
   q=nullptr;
   /*p[5]=6;
   p[6]=7;*/
   cout<<"enter more number :";
   for(int i=5;i<10;i++){
    cin>>p[i];
   }
  /* q[5]=6;
   q[6]=7;*/
   cout<<endl;
   for(int i=0;i<10;i++){
    cout<<p[i]<<" ";
   }
  // delete [] q;
}


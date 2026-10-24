#include<iostream>
using namespace std;
int main()
{
    int arr[5];
        arr[0]=1;
        arr[1]=2;
        arr[2]=3;
        arr[3]=4;
        arr[4]=5;
    int *p,*q;
    //p=new int [5];
    p=arr;
     q=new int [10];
     for(int i=0;i<5;i++){
        q[i]=p[i];
     }
    // delete [] p;
     p=q;
     q=NULL;
   /*  p[5]=6;
     p[6]=7;*/
      for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
     }

    return 0;
}

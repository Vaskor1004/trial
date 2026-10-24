#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int sum(int *a,int *b)
{
     *a=1;
     *b=55;
    int d=*a+ *b;
    return d;
}
int main()
{
     int x=5,y=10;
    //cout<<x<<" "<<y<<endl;
    int s=sum(&x,&y);
   cout<<s;
    getch ();
}

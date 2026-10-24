#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()

{
 int a[5]={1,5,6,7,8};
 int *p=&a[0];
 p=p+2;
 cout<<*p;
 p=p+1;
 *p=2;
 cout<<*p;
   getch();
}

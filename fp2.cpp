#include<iostream>
using namespace std;
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
    cout<<"x is-"<<*p<<" "<<"y is-"<<*q<<endl;
}
int main()
{
    int x=10,y=20;
    cout<<"x is-"<<x<<" "<<"y is-"<<y<<endl;
    swap(&x,&y);
    cout<<"x is-"<<x<<" "<<"y is-"<<y<<endl;
    return 0;
}

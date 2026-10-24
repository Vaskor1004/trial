#include<iostream>
using namespace std;
void swapf(int * x,int * y){
int temp;
temp=*x;
*x=*y;
*y=temp;
}
int main()
{
    int a=12,b=34;
    cout<<"Befpre swap "<<a<<" "<<b<<endl;
    swapf(&a,&b);
    cout<<"after swap "<<a<<" "<<b<<endl;
}

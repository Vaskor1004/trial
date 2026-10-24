#include<iostream>
using namespace std;
void chek(int &a,int &b)
{
    a=25;
    b=34;
}
int main()
{
    int x=5,y=10;
    chek(x,y);
    cout<<x<<" "<<y<<endl;
}



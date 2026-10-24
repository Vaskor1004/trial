#include<iostream>
using namespace std;
void calculate(float c)
{
   float f;
   f=(1.8*c)-32;
   cout<<"farenhiet:"<<f<<endl;
   float k;
   k=c+273.15;
   cout<<"kelvin:"<<k<<endl;
}

int main()
{
    float c;
    cout<<"enter tempareture in celsius:";
    cin>>c;
    calculate(c);
    return 0;
}

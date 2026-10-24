#include<iostream>
using namespace std;
int main()
{
    int arr[]={90,12,34,78,32};
    int* ptr=arr;
    cout<<"adress:"<<ptr<<"  "<<"value:"<<*ptr<<endl;
    ptr++;
   cout<<"adress:"<<ptr<<"  "<<"value:"<<*ptr<<endl;
    ptr=ptr+2;
    cout<<"adress:"<<ptr<<"  "<<"value:"<<*ptr<<endl;
    ptr--;
    cout<<"adress:"<<ptr<<"  "<<"value:"<<*ptr<<endl;
    int d=ptr-arr;
    //cout<<ptr-&arr[0]<<endl;
    cout<<d<<endl;
    return 0;
}

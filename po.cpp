#include<iostream>
using namespace std;
int main()
{
    /*int x=75;
    int* ptr1=&x;
    int** ptr2=&ptr1;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr2<<endl;*/
    int arr[4]={2,3,4,5};
    cout<<*&arr[3];
    return 0;
}


#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    getch();
}

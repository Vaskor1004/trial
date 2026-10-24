#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int b[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0, j=9; i<j; i++,j--){
        swap(a[i],a[j]);
    }
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
}

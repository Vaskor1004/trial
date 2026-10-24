#include<iostream>
using namespace std;
int main()
{
    int a[20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int index;
    cout<<endl<<"enter index:";
    cin>>index;
    int x=a[index];
    for(int i=index;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    cout<<"After deleting the element-------"<<endl;
    cout<<"Deleted number is :"<<x<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

#include<iostream>
using namespace std;
int main()
{
    int *p,*q;
    int n;
    cout<<"enter your desire number:";
    cin>>n;
    p=new int[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    int m;
    cout<<"enter how number:";
    cin>>m;
    q=new int[m];
    for(int i=0;i<m;i++){
        q[i]=p[i];
    }
    delete [] p;
    p=q;
    q=nullptr;
    cout<<"enter more numbers:";
    for(int i=n;i<m;i++){
        cin>>p[i];
    }
    for(int i=0;i<m;i++){
        cout<<p[i]<<" ";
    }
}

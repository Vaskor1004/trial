#include<iostream>
using namespace std;
int main()
{
    short a,b,c;
    cin>>a>>b;
    if(a==1&&b==1){
        cout<<"1/1"<<endl;
        return 0;
    }
    else if(a>b){
        c=a;
    }
    else if(b>a) {
        c=b;
    }
    short r=(6-c)+1;
    if(r==1)
        cout<<"1/6"<<endl;
    else if(r==2)
        cout<<"1/3"<<endl;
     else if(r==3)
        cout<<"1/2"<<endl;
    else if(r==4)
        cout<<"2/3"<<endl;
    else if(r==5)
        cout<<"5/6"<<endl;
    else
    cout<<"1/1"<<endl;
    return 0;
}

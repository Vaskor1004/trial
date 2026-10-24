#include<iostream>
using namespace std;
int main()
{
    int s,e;
    cout<<"enter 1st number:";
    cin>>s;
    cout<<"enter 2nd number:";
    cin>>e;
    cout<<endl;
    while(s<=e){
        if(s%2!=0){
            cout<<s<<" ";
        }
        s++;
    }
    return 0;
}

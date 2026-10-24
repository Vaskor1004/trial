#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl<<"Numbers are: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int num,index;
    bool b=false;
    cout<<endl<<endl<<"enter the number to search:";
    cin>>num;
    for(int i=0;i<n;i++){
        if(a[i]==num){
            index=i;
            b=true;
            break;
        }
    }
    if(b){
        cout<<"successfully found------"<<endl;
        cout<<"index number is :"<<index<<endl<<"Position is :"<<index+1<<endl;
    }
    else{
        cout<<num<< "Not found "<<endl;
    }
}

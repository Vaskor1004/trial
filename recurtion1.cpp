#include<iostream>
using namespace std;
void sum(int x){
    if(x<1){ return;}
    else{
        cout<<x<<" ";
        sum(x-1);
        cout<<x<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    sum(n);
}

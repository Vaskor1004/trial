#include<iostream>
using namespace std;
void func(int x){
    if(x>0){
        cout<<x<<" ";
        func(x-1);
    }
}
int  func2(int x){
    if(x==0){return 0;}
    int sum=func2(x-1);
    cout<<x<<" ";
    return sum+x;
}
int main()
{
    int x;
    cout<<"Enter the element:";
    cin>>x;
    func(x);
    cout<<endl;
    cout<<func2(x);
}

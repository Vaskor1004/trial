#include<iostream>
using namespace std;
int main()
{
    int fv,lv;
    cout<<"Enter the 1st value:";
    cin>>fv;
    cout<<"Enter the 2nd value:";
    cin>>lv;
    for(int i=fv;i<=lv;i++){
          int flag=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=2;
                break;
            }
        }
        if(flag==1){
            cout<<i<<" ";
        }
    }
}

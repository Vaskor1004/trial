#include<iostream>
using namespace std;
int main()
{
    int a[10],even=0,odd=0;
    for(int i=0;i<10;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"printing the element:";
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
     cout<<"======================================"<<endl;
    cout<<"Printing the reverse element:";
    for(int i=9;i>=0;i--){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    cout<<even<<" even number"<<endl;
    cout<<odd<<" odd number"<<endl;
    return 0;
}

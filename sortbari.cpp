#include<iostream>
using namespace std;
int main()
{
    int n,j=0;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
            bool b=false;
            for(int j=0;j<n-i-1;j++){
                    if(a[j]>a[j+1]){
                        b=true;
                        swap(a[j],a[j+1]);
                    }
            }
    if(!b){
        cout<<"Already sorted"<<endl;
              break;
    }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

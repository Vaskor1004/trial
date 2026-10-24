#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    bool flag=false;
    int n,r;
    cin>>n;
    for(int i=4;i<=n/2;i=i+2){
           r=n-i;
           if(r%2==0){
            cout<<i<<" "<<r<<endl;
            break;
           }
           else{
         for(int j=2;j<=sqrt(r);j++){
            if(r%j==0){
                    flag=true;
                cout<<i<<" "<<r<<endl;
                break;
            }
         }
    }
          if(flag)
            break;
        }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n,i;
    cin>>n;
        if(n==1)
        {
            cout<<"i hate it";
        }
        else if(n==2)
        {
            cout<<"i hate that i love it ";
        }
        else {
     for(i=1;i<=n;i++)
     {
         if(i%2==1)
         {
             cout<<"i hate";
         }
         cout<<" that ";
        if(i%2==0)
         {
             cout<<"i love";
         }
         cout<<" that ";
     }
    cout<<" it";
        }
    return 0;
}

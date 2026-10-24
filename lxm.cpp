#include<iostream>
using namespace std;
int x=80;
int pn(int x)
{
   if(x==1){
        cout<<x<<endl;
        return 0;
   }
   cout<<x*(x-1)<<endl;
   pn(x-1);

}
int main()
{
    int n;
    cin>>n;
    pn(n);
    return 0;
}

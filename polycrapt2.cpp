#include<iostream>
using namespace std;
int main()
{
    int k,j=0;
    cin>>k;
    for(int i=1;i<=k;i++){
         j++;
         if(j%3==0){j++;}
         int l = j % 10;
        if(l==3){j++;}
    }
    cout<<j<<endl;
}

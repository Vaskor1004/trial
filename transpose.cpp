#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            cin>>a[row][col];
        }
    }
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
           cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int col=0;col<c;col++){
        for(int row=0;row<r;row++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

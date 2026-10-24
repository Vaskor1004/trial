#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the row size:";
    cin>>r;
    int c;
    cout<<"Enter the coloum size:";
    cin>>c;
    int a[r][c];
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            a[row][col]=0;
        }
    }
    for(int row=0;row<r;row++){
        int x;
        cout<<"Enter the element:";
        cin>>x;
        a[row][row]=x;
    }
    cout<<"Printing the diagonal matrix-----------------------"<<endl;
     for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}

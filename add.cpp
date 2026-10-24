#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    int b[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>c[i][j];
        }
    }
    cout<<"Output of 1st matrix-------------------"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"Output of 2nd matrix-------------------"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"Output of 3rd matrix-------------------"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    int d[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            d[i][j]=a[i][j]+b[i][j]+c[i][j];
        }
    }
    cout<<endl;
    cout<<"Output of result matrix-------------------"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

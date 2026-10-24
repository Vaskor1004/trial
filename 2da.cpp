#include<iostream>
using namespace std;
int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    int *p[3];
    p[0]=new int [4];
    p[1]=new int [4];
    p[2]=new int [4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            p[i][j]=a[i][j];
        }
    }

    int **q=new int*[4];
    q[0]=new int [4];
    q[1]=new int [4];
    q[2]=new int [4];
    q[3]=new int [4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            q[i][j]=p[i][j];
        }
    }
    q=p;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<q[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Nice"<<endl;

    return 0;
}

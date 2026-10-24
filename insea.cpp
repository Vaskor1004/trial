
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,col=2,count=0;
    cin>>n;
    int row;
    cin>>row;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        if(n>arr[i][0])
        {
            count++;
            n=n+arr[i][1];
        }
        else
        {
            count=0;
            break;
        }
    }
   if(count==0)
    cout<<"NO";
   else
    cout<<"YES";
    return 0;
}

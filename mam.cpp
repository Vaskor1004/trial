#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int n,row,col,m;
    cout<<"enter row size:";
    cin>>n;
    cout<<"enter colum size:";
    cin>>m;
    int arr[n][m];
    cout<<"taking input:"<<endl;
    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            cout<<"arr["<<row<<"]["<<col<<"]=";
            cin>>arr[row][col];
        }
    }
    cout<<"showing output:"<<endl;
   for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    //cout<<endl;
   //for(row=0;row<n;row++){
        int max=arr[0][0];
        int min=arr[1][0];
    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
           if(row==0)
           {
               if(arr[row][col]>max)
               {
                   max=arr[row][col];
               }
           }
               else if(row==1)
                {
                    if(arr[row][col]<min)
                    {
                        min=arr[row][col];
                    }
                }
           }
        }
        cout<<"the max number of 1st row"<<":"<<max<<endl;
         cout<<"the min number of 2nd row"<<":"<<min<<endl;
         int result=max*min;
         cout<<"multiplication="<<result;
         getch ();
    }

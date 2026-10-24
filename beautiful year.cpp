#include<iostream>
using namespace std;
int year=1987;
int main()
{
    int rem,count,max=0,flag=0,i,temp;
    static int year;
    //cin>>year;
    //temp=year;
    while(flag!=1)
{
      //static int year;
      ::year++;
    while(year!=0)
    {
        rem=year%10;
        for(i=0;i<=9;i++)
        {   count=0;

            if(rem==i)
            {
                count++;
            }
            if(count>max)
            {
                max=count;
            }
        }
        year=year/10;
    }
    if(max==1)
    {
        flag=1;
    }
}
cout<<year/*max*/;
    return 0;
}

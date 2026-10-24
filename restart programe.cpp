#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
  int num,rem;
  cout<<"enter any number:";
  cin>>num;
  int one,two,three,four,five,six,seven,eight,nine,zero;
  one=two=three=four=five=six=seven=eight=nine=zero=0;
  while(num!=0)
  {
      rem=num%10;
      if(rem==0)
      {
          zero++;
      }
      else if(rem==1)
      {
          one++;
      }
      else  if(rem==2)
      {
          two++;
      }
      else  if(rem==3)
      {
          three++;
      }
       else if(rem==4)
      {
          four++;
      }
       else if(rem==5)
      {
          five++;
      }
       else if(rem==6)
      {
          six++;
      }
       else if(rem==7)
      {
          seven++;
      }
       else if(rem==8)
      {
          eight++;
      }
      else
      {
          nine++;
      }
      num=num/10;

  }
  cout<<"the number of 0 is: "<<zero<<endl;;
   cout<<"the number of 1 is: "<<one<<endl;
    cout<<"the number of 2 is: "<<two<<endl;
     cout<<"the number of 3 is: "<<three<<endl;
      cout<<"the number of 4 is: "<<four<<endl;
       cout<<"the number of 5 is: "<<five<<endl;
        cout<<"the number of 6 is: "<<six<<endl;
         cout<<"the number of 7 is: "<<seven<<endl;
          cout<<"the number of 8 is: "<<eight<<endl;
           cout<<"the number of 9 is: "<<nine<<endl;





getch();
}











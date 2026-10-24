#include<iostream>
#include<string>
using namespace std;
int x=10;
int main()
{
  int x=5;
  ::x=20;
  cout<<::x<<endl;

}

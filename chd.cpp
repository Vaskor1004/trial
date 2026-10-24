#include<iostream>
using namespace std;
class rectangle
{
private:

   int length;
   int breadth;
public:
       void setdimensoin(int l,int b)
       {
           length =l;
           breadth=b;
       }
       int getarea()
       {
           return length*breadth;
       }
       rectangle()
       {
           cout<<"constarutro"<<endl;
       }
       ~rectangle()
       {
           cout<<"destru"<<endl;
       }
};
int main()
{
    rectangle rt;
    rt.setdimensoin(7,4);
    cout<<rt.getarea()<<endl;
    return 0;
}

#include<iostream>
using namespace std;
void rectangles(float x,float y)
{
}
f
 loat area=x*y;
cout<<"area of rectangle is="<<area<<endl;
void circle(float radius)
{
}
f
 loat area=3.1416*radius*radius;
cout<<"area of circle is:"<<area<<endl;
void triangle(float base,float height)
{
}
f
 loat area=0.5*base*height;
cout<<"area of triangle is:"<<area<<endl;
int main()
{
cout<<"which shape's area are you want?"<<endl;
cout<<"press r for rectangles:"<<endl;
cout<<"press c for circle:"<<endl;
cout<<"press t for triangles:"<<endl;
char ch;
cin>>ch;
    if(ch=='r')
    {
        float length,wide;
        cout<<"enter length:";
        cin>>length;
        cout<<"enter wide:";
        cin>>wide;
        rectangles(length,wide);
    }
    else if(ch=='c')
    {
        float radius;
        cout<<"enter radius:";
        cin>>radius;
        circle(radius);
    }
    else if(ch=='t')
    {
        float base,height;
        cout<<"enter base:";
        cin>>base;
        cout<<"enter height:";
        cin>>height;
        triangle(base,height);
    }
    return 0;
}

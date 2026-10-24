//2 number ass
#include<iostream>
using namespace std;
class rectangle
{
public:

    float length;
    float width;

    rectangle()
    {

    }
    rectangle(float l,float w)
    {
        length=l;
        width=w;
    }
    float computearea()
    {
        return length*width;
    }
    void show()
    {
        cout<<"area is:"<<computearea()<<endl;
        cout<<endl;
    }
    void compare(rectangle r[],int n)
    {
        int maxindex=0;
        for(int i=0;i<n;i++)
        {
            if(r[i].computearea()>r[maxindex].computearea())
            {
                maxindex=i;
                }
        }
        r[maxindex].display(maxindex);
    }
    void display(int a)
    {
        cout<<"maxium area is:"<<computearea()<<endl;
        cout<<a+1<<" number ractangular has the maximum area"<<endl;
    }

};
int main()
{
    int n;
    cout<<"enter how many rectangle you want:";
    cin>>n;
    rectangle r[n];
    float length,width;
    for(int i=0;i<n;i++)
    {
        cout<<"taking information for rectangle "<<i+1<<":"<<endl;
        cout<<"enter length:";
        cin>>length;
        cout<<"enter width:";
        cin>>width;
     r[i]=rectangle(length,width);
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"showing detalis of rectangle "<<i+1<<":"<<endl;
         r[i].show();
    }
    rectangle r1;
    r1.compare(r,n);
    return 0;
}

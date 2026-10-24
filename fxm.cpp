#include<iostream>
using namespace std;
class student
{
public:

    int roll;
    float marks;

    void display()
    {
        cout<<roll<<" "<<marks<<endl;
    }
    void setv(int x,float y)
    {
       roll=x;
       marks=y;
    }
};
int main()
{
    student s1,s2;
    s1.setv(2,98);
    s2.setv(3,100);
    s1.display();
    s2.display();
    return 0;
}

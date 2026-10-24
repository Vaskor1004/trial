#include<iostream>
using namespace std;
 class student
{
    public:
    int roll;
    float mark;
    void display()
    {
        cout<<roll<<" "<<mark<<endl;
    }
    student (int x,float y)
    {
        roll=x;
        mark=y;
    }
};
int main()
{
    student s1(2,67.8);
    s1.display();
    student s2(4,778.9);
    s2.display();
}

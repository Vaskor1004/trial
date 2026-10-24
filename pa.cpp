#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    double gpa;

    void display(int id,double gpa)
    {
       /* id=i;
        gpa=g;*/
        cout<<id<<" "<<gpa<<endl;
    }
};
int main()
{
    student s1,s2;
    s1.display(10,3.45);
     s2.display(102,3.85);
    return 0;
}

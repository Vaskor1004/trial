#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int roll;
    float marks;
public:
    student()
    {

    }
    student(string name,int r,float m)
    {
        setName(name);
        roll=r;
        marks=m;
    }

    void setName(string name){
        this->name = name;
    }

    string getName(){
        return name;
    }
    void getv(string n,int r,float m)
    {
        name=n;
        roll=r;
        marks=m;
    }
    void display()
    {
       cout<<"name is:"<<name<<endl;
       cout<<"roll is :"<<roll<<endl;
       cout<<"marks is:"<<marks<<endl;
    }
};
int main()
{

    student s;
    s.getv("Rajib saha",10,98);
    s.display();
    return 0;
}

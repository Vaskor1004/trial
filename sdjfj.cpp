#include<iostream>
using namespace std;
float sum=0,avg=0;
class student
{
private:

    string name;
    int roll;
    float marks[3];
 public:
    void getvalue(string n,int r,float m[],int x)
    {
        name=n;
        roll=r;
        for(int i=0;i<x;i++)
        {
            marks[i]=m[i];
        }
    }
    float calculate(student stu[],int num)
    {
        for(int i=0;i<num;i++)
        {
            cout<<endl;
            cout<<"showing display of student------ "<<i+1<<":"<<endl;
            sum=0;
            for(int j=0;j<3;j++)
            {
                sum+=stu[i].marks[j];
            }
            float avg=(float)sum/3;
            stu[i].show(avg);
        }
    }

     void show(float avg)
    {
        cout<<"name is:"<<name<<endl;
        cout<<"roll is:"<<roll<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"mark for subject "<<i+1<<":";
            cout<<marks[i]<<endl;
        }
        cout<<"average number is:"<<avg<<endl;
    }
};
int main()
{
    int n,roll;
    string name;
    float mark[3];
    cout<<"enter student number:";
    cin>>n;
    student s[n];
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        cout<<"taing input for student--------- "<<i+1<<":"<<endl;\
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter roll:";
        cin>>roll;
        for(int i=0;i<3;i++)
        {
            cout<<"enter marks for subject "<<i+1<<":";
            cin>>mark[i];
        }
        s[i].getvalue(name,roll,mark,3);
        cin.ignore();
    }
    student s1;
    s1.calculate(s,n);
    return 0;
}

#include<iostream>
using namespace std;
class student
{
private:

    string name;
    int roll;
    float marks[3];
public:
    void setv(string n,int r,float x[],int num)
    {
        name=n;
        roll=r;
        for(int j=0;j<num;j++)
        {
            marks[j]=x[j];
        }
    }
    void getv(float avg)
    {
        cout<<"name is:"<<name<<endl;
        cout<<"roll is:"<<roll<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"shwoing marks for subject-"<<i+1<<":";
            cout<<marks[i]<<endl;
        }
        cout<<"average mark is:"<<avg<<endl;
        cout<<endl;
    }
    void calculate(student st[],int sn)
    {
        float avg;
        for(int i=0;i<sn;i++)
        {
            float sum=0;
            for(int j=0;j<3;j++)
            {
                sum+=st[i].marks[j];
            }
            avg=sum/3;
            if(avg>40)
            {
                cout<<i+1<<" number student is passed"<<endl;
                st[i].getv(avg);
            }
            else
            {
                cout<<i+1<<" number student is falied "<<endl;
            }
        }
    }

};
int main()
{
    string name;
    int roll;
    float mark[3];
    int sn;
    cout<<"enter student number:";
    cin>>sn;
    student s[sn];
    cin.ignore();
    for(int i=0;i<sn;i++)
    {
        cout<<"taking input for student------"<<i+1<<endl;
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter roll:";
        cin>>roll;
        for(int i=0;i<3;i++)
        {
            cout<<"taking mark for subject-"<<i+1<<":";
            cin>>mark[i];
        }
        s[i].setv(name,roll,mark,3);
        cin.ignore();
    }
    cout<<endl;
    student s1;
    s1.calculate(s,sn);
    return 0;
}

//number 5 ass
#include<iostream>
using namespace std;
float sum;
class student
{
private:

    string name;
    int roll;
    float marks[3];
public:
    void inputdetails(string na,int r,float m[],int n)
    {
        name=na;
        roll=r;
        for(int i=0;i<n;i++)
        {
            marks[i]=m[i];
        }
    }
    void display(float avg)
    {
        cout<<"name is:"<<name<<endl;
        cout<<"roll number is:"<<roll<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<"mark of subject "<<i+1<<":";
            cout<<marks[i]<<endl;
        }
        cout<<"average number is:"<<avg<<endl;
        cout<<endl;
    }
    void calculateaverage(student s[],int num)
    {
        for(int i=0;i<num;i++)
        {
            float sum=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+s[i].marks[j];
        }
        float avg=(float)sum/3;
        if(avg>=40)
        {
            cout<<endl;
            cout<<"this student has passed"<<endl;
            s[i].display(avg);
        }
        else
            cout<<"number "<<i+1<<" is fail"<<endl;
    }
    }
};
int main()
{
    string name;
    int roll;
    float marks[3];
    int sn;
    cout<<"enter student number:";
    cin>>sn;
    student s[sn];
    cin.ignore();
    for(int i=0;i<sn;i++)
    {
        cout<<"taking input for studen"<<i+1<<":"<<endl;
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter roll:";
        cin>>roll;
         for(int i=0;i<3;i++)
         {
             cout<<"enter marks for subject "<<i+1<<":";
             cin>>marks[i];
         }
         s[i].inputdetails(name,roll,marks,3);
         cin.ignore();
    }
    cout<<endl;
    student s1;
    s1.calculateaverage(s,sn);
    return 0;
}

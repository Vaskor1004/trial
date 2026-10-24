#include<iostream>
using namespace std;
class student
{
public:

    string name;
    string id;
    float cgpa;
    void calculatecgpa(student s1,student s2,student s3)
{
   if(s1.cgpa>s2.cgpa && s1.cgpa>s3.cgpa)
   {
       cout<<"student with heighest cgpa:"<<endl;
       cout<<"name:"<<s1.name<<endl;
       cout<<"id:"<<s1.id<<endl;
       cout<<"cgpa:"<<s1.cgpa<<endl;
   }
   else if(s2.cgpa>s1.cgpa&&s2.cgpa>s3.cgpa)
   {
       cout<<"student with heighest cgpa:"<<endl;
       cout<<"name:"<<s2.name<<endl;
       cout<<"id:"<<s2.id<<endl;
       cout<<"cgpa:"<<s2.cgpa<<endl;
   }
   else
    {
        cout<<"student with heighest cgpa:"<<endl;
       cout<<"name:"<<s3.name<<endl;
       cout<<"id:"<<s3.id<<endl;
       cout<<"cgpa:"<<s3.cgpa<<endl;
    }
 }
};

int main()
{
    student s1,s2,s3,s4;
    cout<<"taking 1st student information"<<endl;
    cout<<"enter 1st student name:";
    getline(cin,s1.name);
    cout<<"enter 1st student id:";
    getline(cin,s1.id);
    cout<<"enter 1st student cgpa:";
    cin>>s1.cgpa;
    cin.ignore();

    cout<<endl<<"taking 2nd student information"<<endl;
    cout<<"enter 2nd student name:";
    getline(cin,s2.name);
    cout<<"enter 2nd student id:";
    getline(cin,s2.id);
    cout<<"enter 2nd student cgpa:";
    cin>>s2.cgpa;
    cin.ignore();

    cout<<endl<<"taking 3rd student information"<<endl;
    cout<<"enter 3rd student name:";
    getline(cin,s3.name);
    cout<<"enter 3rd student id:";
    getline(cin,s3.id);
    cout<<"enter 3rd student cgpa:";
    cin>>s3.cgpa;
    cin.ignore();
    cout<<endl;
    s4.calculatecgpa(s1,s2,s3);
    return 0;
}

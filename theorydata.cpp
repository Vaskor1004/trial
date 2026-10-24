#include<iostream>
using namespace std;
struct course{
     string c_name;
     int c_id;
};
struct student{
     string s_name;
     int s_id;
     float cgpa;
     course c;

     student(){}

     student(string s_n,int id1,float cg,string c_n,int cid){
          s_name=s_n;
          s_id=id1;
          cgpa=cg;
          c.c_name=c_n;
          c.c_id=cid;

     }
     void output(){
       cout<<"Student name is:"<<s_name<<endl;
       cout<<"Student id is:"<<s_id<<endl;
       cout<<"cgpa is :"<<cgpa<<endl;
       cout<<"Course name is :"<<c.c_name<<endl;
       cout<<"Course id is :"<<c.c_id<<endl;
     }
};
int main()
{
    /*student s("vaskor",123,3.98,"math4",32);
    s.output();*/
    student s[3];

    for(int i=0;i<3;i++){
        string s_name;
        int s_id;
        float cgpa;
        string c_name;
        int c_id;

        cout<<"Enter student name:";
        cin.ignore();
        getline(cin,s_name);

        cout<<"Enter student id:";
        cin>>s_id;

        cout<<"Enter the cgpa:";
        cin>>cgpa;

        cout<<"Enter course name:";
        cin.ignore();
        getline(cin,c_name);

        cout<<"Enter course id:";
        cin>>c_id;

        s[i]=student(s_name,s_id,cgpa,c_name,c_id);
    }
    for(int i=0;i<3;i++){
        cout<<"showing infromation od student "<<i<<" ---------------------------------"<<endl;
        s[i].output();
        cout<<"------------------------------------------------------------------------"<<endl;
    }
}

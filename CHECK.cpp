
#include<iostream>

using namespace std;

class student

{

private:

    string name;

    string id;

    float cgpa;

public:

    void setvalue(string x,string y,float z)

    {

        name=x;

        id=y;

        cgpa=z;

        getvalue();

    }

    void getvalue()

    {
        cout<<endl;

        cout<<"information about student:"<<endl;

        cout<<"name is: "<<name<<endl;

        cout<<"id is: "<<id<<endl;

        cout<<"cgpa is: "<<cgpa<<endl;

    }

};

int main()

{

    student s;

    student* ptr=&s;
    string n;
    cout<<"enter name:";
    getline(cin,n);
    string id;
    cout<<"enter id:";
    cin>>id;
    float cgpa;
    cout<<"enter cgpa:";
    cin>>cgpa;
    (*ptr).setvalue(n,id,cgpa);

    return 0;

}

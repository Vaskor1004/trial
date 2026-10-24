//question number:05;
#include<iostream>
#include<cstring>
using namespace std;
struct person
{
    char name[30];
    int age;
    float salary;
   // char name[30];
};
int main()
{
    struct person p[4];
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"info of "<<i+1<<":"<<endl;
        cout<<"enter name:";
        cin.ignore();
        gets(p[i].name);
        //cin.ignore();
        cout<<"enter age:";
        cin>>p[i].age;
        cout<<"enter salry:";
        cin>>p[i].salary;
    }
    struct person* ptr=&p[0];
    for(i=0;i<2;i++)
    {
        cout<<"output of "<<i+1<<":"<<endl;
        cout<<"name:"<<(*(ptr+i)).name;
        cout<<"age:"<<(*(ptr+i)).age;
        cout<<"salr:"<<(*(ptr+i)).salary;
    }
    return 0;
}

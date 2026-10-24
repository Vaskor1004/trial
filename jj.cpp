#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
struct student
{
    int age;
    float mark;
    char name[30];
}s1;
int main()
{
    struct student s1={1,2.32,"vas"},s2;
    //s2=s1;
    s2.age=14;
    s2.mark=36.5;
    strcpy(s2.name,"vaskor saha");
    cout<<s1.age<<" "<<s1.mark<<" "<<s1.name<<endl;
  cout<<s2.age<<" "<<s2.mark<<" "<<s2.name;
    getch();
}

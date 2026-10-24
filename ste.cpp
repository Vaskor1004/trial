//sturcture pointer
#include<iostream>
#include<conio.h>
#include<cstring>
#include<string.h>
using namespace std;
 typedef struct student
 {
     int roll,sub;
     float mark;

 }ss;
int main()
{
     ss s1={1,6,99.5};
     cout<<s1.roll<<" "<<s1.sub<<" "<<s1.mark;
    getch();
}

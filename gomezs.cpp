#include <iostream>
using namespace std;

struct dob
{
    int day, month, year;
};

struct student{
    string name;
    int age;
    float cgpa;
    dob birth;
    student *fr;

    struct course
    {
        string cname;
        int cid;
    }cou;

    student(string n, int a, float c, string cn, int ci , int d, int m, int y)
    {
        name = n;
        age = a;
        cgpa = c;
        cou.cname = cn;
        cou.cid = ci;
        birth.day = d;
        birth.month = m;
        birth.year = y;
    }
    void print()
    {
            cout << "---------------------------------" << endl;
            cout << "Student Name  : " << name << endl;
            cout << "Student Age   : " << age << endl;
            cout << "Student CGPA  : " << cgpa << endl;
            cout << "Student Course: " << cou.cname << endl;
            cout << "Course ID     : " << cou.cid << endl;
            cout << "Student DOB   : " << birth.day << "/" << birth.month << "/" << birth.year << endl;
            cout << "***" << endl;
            cout << "Friend Name   : " << fr->name << endl;
            cout << "Friend Age    : " << fr->age << endl;
            cout << "Friend CGPA   : " << fr->cgpa << endl;
            cout << "Friend Course : " << fr->cou.cname << endl;
            cout << "Friend CID    : " << fr->cou.cid << endl;
            cout << "Friend DOB    : " << fr->birth.day << "/" << fr->birth.month << "/" << fr->birth.year << endl;

    }
};

void printStudents(student *s, int n)
    {
        cout << "Student details: " << endl;
        for(int i=0; i<n; i++)
        {
            cout << "---------------------------------" << endl;
            cout << "Student Name: " << s[i].name << endl;
            cout << "Student Age : " << s[i].age << endl;
            cout << "Student CGPA: " << s[i].cgpa << endl;
        }
    }
int main()
{
    /*
    student stuList[]={
        {"Abdul", 22, 3.97},
        {"Rahim", 21, 3.08},
        {"Karim", 23, 4.00}
    };
    printStudents(stuList, 3);
    */
    student s1("Abdul", 22, 3.97, "Data Structure" , 12, 4, 11, 2000);
    student *fri;

    fri = s1.fr = new student("Karim", 23, 3.17, "Data Structure" , 12, 3, 2, 1999);
    s1.print();


    return 0;
}

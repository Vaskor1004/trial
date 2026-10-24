#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pos,num;
    cout<<"Enter the position:";
    cin>>pos;
    cout<<"Enter the number :";
    cin>>num;
    for(int i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=num;
    n++;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the position to delete :";
    cin>>pos;
    for(int i=pos;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++){

            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mini;
    for(int i=0;i<n;i++){
        mini=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mini]){
                mini=j;
            }
        }
        if(mini!=i){
            swap(a[i],a[mini]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int j=i-1;
        int x=a[i];
        while(j>-1 && a[j]>x){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
    }
    cout<<endl;
    int low=0;
    int high=n-1;
    int x;
    cout<<"Enter the element for searching:";
    cin>>x;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==x){
            cout<<"The element has found at index :"<<mid<<endl;
            break;
        }
        else if(x<a[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the row size:";
    cin>>row;
    cout<<"Enter the colum size:";
    cin>>col;
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Main array ----------------------------------------"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose ------------------------------------------"<<endl;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
struct student{
   string name;
   int id;
};
int main()
{
    student s;
    s.name="vaskor saha";
    s.id=101;
    cout<<"name :"<<s.name<<endl;
    cout<<"id :"<<s.id<<endl;
}
#include<iostream>
using namespace std;
struct course{
   string name;
   int id;
};
struct student{

    string name;
    float cgpa;
    course c;

    student(){}

    student(string n,float cg,string cn,int ci){
         name=n;
         cgpa=cg;
         c.name=cn;
         c.id=ci;
    }

    void display(){
      cout<<"student name :"<<name<<endl;
      cout<<"student cgpa :"<<cgpa<<endl;
      cout<<"Course name :"<<c.name<<endl;
      cout<<"course id :"<<c.id<<endl;
    }
};
int main(){
    student s("vaskor",3.98,"abc",101);
    s.display();*/
    student s[3];
            student("vaskor",3.98,"abc",101),
            student("badhon",3.85,"efg",202),
            student("akash",3.80,"xyz",303)*/
           for(int i=0;i<3;i++){

                string sn;
                cout<<"Enter student name:";
                cin.ignore();
                getline(cin,sn);

                float cg;
                cout<<"Enter the cg :";
                cin>>cg;


                string cn;
                cout<<"Enter the course name:";
                cin.ignore();
                getline(cin,cn);

                int id;
                cout<<"Enter the id :";
                cin>>id;

                s[i]=student(sn,cg,cn,id);
            }
    for(int i=0;i<3;i++){
        s[i].display();
    }
}
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

    student stuList[]={
        {"Abdul", 22, 3.97},
        {"Rahim", 21, 3.08},
        {"Karim", 23, 4.00}
    };
    printStudents(stuList, 3);

    student s1("Abdul", 22, 3.97, "Data Structure" , 12, 4, 11, 2000);
    student *fri;

    fri = s1.fr = new student("Karim", 23, 3.17, "Data Structure" , 12, 3, 2, 1999);
    s1.print();


    return 0;
}*/
#include <iostream>
using namespace std;

struct stackk {

    int *st;
    int max_size;
    int top;

    stackk(int n) {
        st = new int[n];
        max_size = n;
        top = 0;
    }

    bool isfull() {
        return (top == max_size);
    }

    bool isempty() {
        return (top == 0);
    }

    // Resize function: double the size
    void resize() {
        int new_size = max_size * 2;
        int *new_st = new int[new_size];
        for (int i = 0; i < top; i++) {
            new_st[i] = st[i];
        }
        delete[] st;   // free old memory
        st = new_st;
        max_size = new_size;
        cout << "Stack resized to " << max_size << endl;
    }

    void push(int x) {
        if (isfull()) {
            resize(); // automatically resize
        }
        st[top++] = x;
    }

    void pop() {
        if (isempty()) {
            cout << "The stack is empty" << endl;
            return;
        }
        top--;
    }

    void show() {
        cout << "Stack: ";
        for (int i = top - 1; i >= 0; i--) {
            cout << st[i] << " ";
        }
        cout << endl;
    }

    ~stackk() { // destructor to free memory
        delete[] st;
    }
};

int main() {
    stackk s(3);

    s.push(1);
    s.push(2);
    s.push(3);
    s.show();

    s.push(4); // triggers resize
    s.show();

    s.pop();
    s.show();

    s.pop();
    s.show();

    s.pop();
    s.show();

    s.pop();
    s.show();

    return 0;
}

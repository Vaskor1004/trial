#include<iostream>
using namespace std;
class Book
{
public:

    string title;
    string author;
    float price;
    int year;

    Book(string x,string y,float z,int a)
    {
       title=x;
       author=y;
       price=z;
       year=a;
    }
    void showdetails()
    {
        cout<<"title is:"<<title<<endl;
        cout<<"author is:"<<author<<endl;
        cout<<"price is:"<<price<<endl;
        cout<<"Published year is:"<<year<<endl;
       // cout<<endl;
    }
    bool isexpensive()
    {
        if(price>1000)
            return 1;
        else
          return 0;
    }
};
int main()
{
    Book b1("Himu","Rabindronath",1200,1995);
    Book b2("Pother Pachali","kaji nazrul islam",900,1975);
    b1.showdetails();
    int result=b1.isexpensive();
    if(result==1)
        cout<<"this book is expensive"<<endl;
    else
        cout<<"this book is not expensive"<<endl;
        cout<<endl;
    b2.showdetails();
    int result2=b2.isexpensive();
    if(result2==1)
        cout<<"this book is expensive"<<endl;
    else
        cout<<"this book is not expensive"<<endl;
    return 0;
}

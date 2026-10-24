#include<iostream>
using namespace std;
 class Book{
  private:
    string name;
    int price;

  public:
   void setname(string name){
   this->name=name;
   }
   void setprice(int price){
   this->price=price;
   }
   string getname(){
   return name;
   }
   int  getprice(){
   return price;
   }
   void showd(){
   cout<<name<<endl;
   cout<<price<<endl;
   }
};


int main()
{
    Book b;
    //b.name="nasiia";
    b.setname("jhbhjh");
    b.setprice(120);
   // b.show();
   b.showd();
    return 0;
}

#include<iostream>
#include<conio.h>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
   char s[]="hello";
   char t[]="world";
   int d=strcmp(s,t);
   cout<<d;
  getch();

}
/*#include <iostream>
#include <cstring>
using namespace std;  // For strcmp

int main() {
    // Two example strings
    const char* str1 = "Hello";
    const char* str2 = "World";

    // Compare the strings
    int result = strcmp(str1, str2);

    // Output comparison result
    /*if (result == 0) {
        std::cout << "The strings are equal." << std::endl;
    } else if (result < 0) {
        std::cout << "The first string is lexicographically less than the second string." << std::endl;
    } else {
        std::cout << "The first string is lexicographically greater than the second string." << std::endl;
    }*/
    /*cout<<result;

    return 0;*/
//}

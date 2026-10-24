#include<iostream>
using namespace std;
int main()
{
    cout<<"hi"<<endl;
    for(int i = 0; i <=9999; i++)
    {
        int count = 0;
        int j = i;
        if(i == 0)
        {
            cout << "0000" << endl;
            continue;
        }
        while(j != 0)
        {
            j = j / 10;
            count++;
        }
        int s = 4 - count;
        while(s--)
        {
            cout << "0";
        }
        cout << i << endl;
    }
}

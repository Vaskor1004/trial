#include <iostream>
using namespace std;

int st_arr[100];
int top = -1;
int maxSize = 100;


void push(int a)
{
    if (top == maxSize - 1)
    {
        cout << "Stack full!!"<<endl;
        return;
    }

    top++;
    st_arr[top] = a;

    cout << "Element added: " << a << endl;

}


void pop()
{
    if (top == -1)
    {
        cout << "Stack is empty.Nothing cant be removed"<<endl;
        return;
    }

    cout << "Removed elemetn: " << st_arr[top] << endl;
    top--;


}


void display()
{
    if (top == -1)
    {
        cout << "Stack is empty"<<endl;
        cout << "--------------------"<<endl;
        return;
    }

    cout << "Current Stack:";
    for (int i = top; i >= 0; i--)
    {
        cout << st_arr[i] <<" ";
    }
    cout << "--------------------"<<endl;
}

int main()
{
    push(1);
    push(2);
    push(3);
    pop();
    display();
    push(4);
    push(5);
    display();
    pop();
    display();
    return 0;
}

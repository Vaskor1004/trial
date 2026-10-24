/*#include<iostream>
using namespace std;
 const int maxs=10;
struct Employee{

    string name;
    string dept;
    int id;
    string task[maxs];
    int top;

    Employee(){top=-1;}

    void push(string work)
    {
        if(top==maxs-1){
            cout<<"Tasks stack is full for "<<name<<endl;
        }
        else{

            top++;
            task[top]=work;
            cout<<"Added task: "<<work<<" for "<<name<<endl;
        }
    }
    void pop()
    {
        if(top==-1){
            cout<<name<<" Has completed all task"<<endl;
        }
        else{
            cout<<endl<<name<<" Has completed the task: "<<task[top]<<endl;
            top--;

        }
        cout<<endl;
        show_all_task();
    }
    void show_all_task(){
        if(top==-1){
            cout<<"All the tasks are completed"<<endl;
        }
        else{
            cout<<"The tasks for "<<name<<" ----------------------"<<endl;
            int j=1;
            for(int i=top; i>=0;i--){
                cout<<j<<"."<<task[i]<<endl;
                j++;
            }
        }
    }
};
struct Client_task
{
    int frnt;
    int rear;
    string* arr;
    int mxsz;

    Client_task(int s)
    {
        mxsz = s;
        arr = new string[mxsz];
        frnt = rear = -1;
    }

    bool isempty() { return (frnt == -1 && rear == -1); }
    bool isfull() { return ((rear + 1) % mxsz == frnt); }

    void enqueue(string x)
    {
        if (isfull())
        {
            cout << "Task queue is full. Cannot add: " << x << endl;
        }
        else if (isempty())
        {
            frnt = rear = 0;
            arr[rear] = x;
            cout << "Added task: " << x << endl;
        }
        else
        {
            rear = (rear + 1) % mxsz;
            arr[rear] = x;
            cout << "Added task: " << x << endl;
        }
    }

    void dequeue()
    {
        if (isempty())
        {
            cout << "All tasks completed. Nothing to do now." << endl;
        }
        else if (frnt == rear)
        {
            cout << "Completed task: " << arr[frnt] << endl;
            frnt = rear = -1;
        }
        else
        {
            cout << "Completed task: " << arr[frnt] << endl;
            frnt = (frnt + 1) % mxsz;
        }
    }

    void show_tasks()
    {
        if (isempty())
        {
            cout << "All tasks completed. Nothing to do now." << endl;
            return;
        }

        cout << "Current client tasks: ";
        if (frnt <= rear)
        {
            for (int i = frnt; i <= rear; i++)
                cout << arr[i] << "  ";
        }
        else
        {
            for (int i = frnt; i < mxsz; i++)
                cout << arr[i] << "  ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << "  ";
        }
        cout << endl;
    }
};



int main() {

    Employee e1;
    e1.id = 101;
    e1.name = "Ahsan";
    e1.dept = "Dev";

    Employee e2;
    e2.id = 102;
    e2.name = "Sadia";
    e2.dept = "QA";

    e1.push("Fix Login Bug");
    e1.push("Code Review");
    e1.push("Visiting");

    e2.push("Write Test Cases");
    e2.push("fix algorthm");
    e2.push("Hackig");

   // e1.popTask();

    e1.show_all_task();
    e1.pop();
    e2.show_all_task();
    cout<<endl;

    Client_task q1(5);

    q1.enqueue("Client Task 1");
    q1.enqueue("Client Task 2");
    q1.enqueue("Client Task 3");
    q1.enqueue("Client Task 4");
    q1.enqueue("Client Task 5");

    q1.dequeue();
    q1.dequeue();

    q1.enqueue("Client Task 6");
    q1.enqueue("Client Task 7");

    q1.show_tasks();

}*/
#include<iostream>
using namespace std;

const int maxs = 10;

struct Employee {
    string name;
    string dept;
    int id;
    string task[maxs];
    int top;

    Employee() { top = -1; }

    void push(string work) {
        if (top == maxs - 1) {
            cout << "Tasks stack is full for " << name << endl;
        } else {
            top++;
            task[top] = work;
            cout<<"------------------------------------------"<<endl;
            cout << "Added task: " << work << " for " << name << endl;
            cout<<"------------------------------------------"<<endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << name << " has completed all tasks" << endl;
        } else {
            cout << name << " completed task: " << task[top] << endl;
            top--;
        }
    }

    void show_all_task() {
        if (top == -1) {
            cout << name << " has no tasks\n";
        } else {
            cout << "Tasks for " << name << ":\n";
            for (int i = top; i >= 0; i--) {
                cout << "- " << task[i] << endl;
            }
        }
    }
};

struct EmpNode {
    Employee data;
    EmpNode* next;
    EmpNode* prev;
};

struct EmployeeList {
    EmpNode* head;
    EmpNode* tail;

    EmployeeList() {
        head = tail = NULL;
    }

    void addEmployee(Employee e) {
        EmpNode* newNode = new EmpNode;
        newNode->data = e;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void showEmployees() {
        EmpNode* temp = head;
        cout << "\nEmployees:\n";
        while (temp != NULL) {
            cout << "ID: " << temp->data.id
                 << " Name: " << temp->data.name
                 << " Dept: " << temp->data.dept << endl;
            temp = temp->next;
        }
    }
};


struct Client_task {
    int frnt, rear, mxsz;
    string* arr;

    Client_task(int s) {
        mxsz = s;
        arr = new string[mxsz];
        frnt = rear = -1;
    }

    bool isempty() { return (frnt == -1 && rear == -1); }
    bool isfull() { return ((rear + 1) % mxsz == frnt); }

    void enqueue(string x) {
        if (isfull()) {
            cout << "Queue full\n";
        } else if (isempty()) {
            frnt = rear = 0;
            arr[rear] = x;
        } else {
            rear = (rear + 1) % mxsz;
            arr[rear] = x;
        }
        cout << "Added: " << x << endl;
    }

    string dequeue() {
        if (isempty()) {
            return "";
        }
        string val = arr[frnt];

        if (frnt == rear)
            frnt = rear = -1;
        else
            frnt = (frnt + 1) % mxsz;

        return val;
    }
};

int main() {

    EmployeeList company;

    /*Employee e1;
    e1.id = 101; e1.name = "Ahsan"; e1.dept = "Dev";

    Employee e2;
    e2.id = 102; e2.name = "Sadia"; e2.dept = "QA";

    Employee e3;
    e3.id = 103; e3.name = "Rafiq"; e3.dept = "HR";*/
    Employee e[3];
    for(int i=0;i<3;i++){
        cout<<"Enter employee id:";
        cin>>e[i].id;
        cout<<"Enter employee name:";
        cin>>e[i].name;
        cout<<"Enter employee department:";
        cin>>e[i].dept;
    }

   /* company.addEmployee(e1);
    company.addEmployee(e2);
    company.addEmployee(e3);*/

    for(int i=0; i<3;i++){
        company.addEmployee(e[i]);
    }
    cout<<endl;

    company.showEmployees();

    EmpNode* curr = company.head;

    cout <<endl<< "--- Adding Initial Tasks ---"<<endl;
    /*company.head->data.push("Fix Login Bug");
    company.head->data.push("Code Review");
    company.head->next->data.push("Write Test Cases");*/
    cin.ignore();
    while(curr!=nullptr){

        string s;
        cout<<"Enter the task:";
        getline(cin,s);
        curr->data.push(s);
        curr=curr->next;
    }

    /*company.head->data.show_all_task();
    company.head->next->data.show_all_task();*/
    EmpNode* flow = company.head;
    while(flow!=nullptr){
        flow->data.show_all_task();
        flow=flow->next;
    }

    cout << endl<<"--- Client Task Queue ---"<<endl;
    Client_task q(5);
    q.enqueue("Client Task 1");
    q.enqueue("Client Task 2");
    q.enqueue("Client Task 3");

    cout <<endl<< "--- Assigning Client Tasks Round-Robin ---"<<endl;
    EmpNode* temp = company.head;

    while (!q.isempty()) {
        string t = q.dequeue();
        if (temp == NULL) temp = company.head;
        temp->data.push(t);
        temp = temp->next;
    }

    cout <<endl<< "--- Final Employee Tasks ---"<<endl;
    EmpNode* show = company.head;
    while (show != NULL) {
        show->data.show_all_task();
        show = show->next;
    }
}



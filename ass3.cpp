//3 number ass
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    float* marks = new float[n];
    cout << "Enter marks:"<<endl;

    for (int i = 0; i < n; i++)
        {
        cin >> *(marks + i);
    }

    float sum = 0;
    for (int i = 0; i < n; i++)
        {
        sum += *(marks + i);
    }
    float average = sum / n;

    float max = *(marks);
    for (int i = 1; i < n; i++)
        {
        if (*(marks + i) > max)
         {
            max = *(marks + i);
        }
    }

    int countmoreAvg = 0;
    for (int i = 0; i < n; i++)
        {
        if (*(marks + i) > average)
         {
            countmoreAvg++;
        }
    }

    cout << "Average Mark iss: " << average << endl;
    cout << "Highest Mark iss: " << max << endl;
    cout << "Number of students who scored more than average: " << countmoreAvg << endl;

    delete[] marks;

    return 0;
}


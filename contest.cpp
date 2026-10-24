#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[205];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[405];
        int j = 0;

        for(int i = 0; i < n - 1; i++)
        {
            b[j++] = a[i];

            if(a[i] < a[i + 1])
            {
            }
            else
            {
                b[j++] = 1;
            }
        }
        b[j++] = a[n - 1];

        cout << j << endl;
        for(int i = 0; i < j; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}

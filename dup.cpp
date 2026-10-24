#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n); // arrange elements so duplicates come together

    int count = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) count++;
        else {
            if (count > 1)
                cout << "Duplicate number is " << a[i]
                     << " repeated " << count << " times." << endl;
            count = 1;
        }
    }
    if (count > 1)
        cout << "Duplicate number is " << a[n - 1]
             << " repeated " << count << " times." << endl;

    return 0;
}


#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    if (s.length() < 26) {
        cout << "NO" << endl;
        return 0;
    }

    int count = 0;
    for (char ch = 'a'; ch <= 'z'; ch++) {
        count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (ch == s[i]) {
                count++;
                break;
            }
        }
        if (count == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}

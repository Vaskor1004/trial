#include<iostream>
#include<string>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int a, b;
        cin >> a >> b;
        string s, t, u;
        cin >> s >> t;
        if (s.find(t) != string::npos) {
            cout << 0 << endl;
        } else {
            int count = 1;
            bool found = false;
            while (b--) {
                u = s;
                s = u + u;
                if (s.find(t) != string::npos) {
                    cout << count << endl;
                    found = true;
                    break;
                }
                count++;
            }
            if (!found) cout << -1 << endl;
        }
    }
}

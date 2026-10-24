/*#include<iostream>
using namespace std;
int main() {
    int n, r = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        r *= 2;
        if (r > n) {
            r /= 2;
            cout << ((n - r) * 2) + 1 << endl;
            break;
        }
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int n, r = 1;
    cin >> n;
    bool flag;

    for(int i = 1; i <= n; i++) {
        r *= 2;
          flag=false;
        if(r <= n) {
            flag = true;
            continue;
        }

       else if(flag == false) {
            r = r / 2;
            cout << ((n - r) * 2) + 1;
            break;
        }
    }

    return 0;
}


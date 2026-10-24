#include<iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;
    if(test != 3) cout << "wa" << endl;
    while(test--){
        int x;
        cin >> x;
        if(x % 2 == 0) cout << "even" << endl;
        else cout << "odd" << endl;
    }
    return 0;
//    int i = 0, n, count, max = 0;
//    char mostFrequentChar;
//
//    cout << "Enter size: ";
//    cin >> n;
//
//    string s[n];
//    for(i = 0; i < n; i++)
//    {
//        cin >> s[i];
//    }
//
//    for(char j = 'a'; j <= 'z'; j++)
//    {
//        count = 0;
//        for(i = 0; i < n; i++)
//        {
//            if (s[i] == j)
//            {
//                count++;
//            }
//        }
//        if(count > max)
//        {
//            max = count;
//            mostFrequentChar = j;
//        }
//    }
//
//    cout << mostFrequentChar << " " << max;
//    getch();
//    return 0

}



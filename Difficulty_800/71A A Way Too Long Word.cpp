#include <iostream>
// #include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int len = str.length();
        if (len > 10)
        {
            cout << str[0] << (len - 2) << str[len - 1];
        }
        else
            cout << str;
        cout << endl;
    }
    return 0;
}
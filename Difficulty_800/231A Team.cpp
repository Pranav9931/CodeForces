#include <iostream>
using namespace std;
int main()
{
    int n, counter = 0;
    cin >> n;
    while (n--)
    {
        int a, b, c, count = 0;
        cin >> a >> b >> c;
        if (a == 1)
            count++;
        if (b == 1)
            count++;
        if (c == 1)
            count++;
        if (count >= 2)
            counter++;
    }
    cout << counter;
    return 0;
}
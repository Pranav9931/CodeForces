// Difficulty Level - 1000
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b, index = 0;
        cin >> n >> r >> b;
        vector<char> v;
        for (int i = 0; i < b; i++)
        {
            v.push_back('B');
        }
        int idx = 0, count = 0;
        while (r != 0)
        {
            idx++;
            v.insert(v.begin(), 'R');
            r--;
            for (int i = count + 1; i < b * (idx + 1) && r != 0; i += idx + 1)
            {
                v.insert(v.begin() + i + 1, 'R');
                r--;
            }
            count++;
        }
        for (auto a : v)
            cout << a;
        cout << "\n";
    }
    return 0;
}

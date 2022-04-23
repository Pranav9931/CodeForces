#include <iostream>
using namespace std;
int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    if (k <= n)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                break;
            if (arr[i] >= arr[k - 1])
                count++;
        }
    }
    cout << count;
    return 0;
}
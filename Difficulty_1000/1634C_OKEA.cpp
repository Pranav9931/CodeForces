#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        bool validate = true;
        int a[n][m];
        if ((n >= 2 && m >= 2 && n % 2 == 1) || (n == 1 && m != 1))
            validate = false;
        if (validate)
        {
            for (int i = 0; i < n; i++)
            {
                int k = 0;
                for (int j = i + 1; j <= m * n && k < m; j += n)
                {
                    if (j <= n * m)
                    {
                        a[i][k] = j;
                    }
                    else
                    {
                        validate = false;
                    }
                    k++;
                }
            }
        }
        if (validate)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << a[i][j] << " ";
                }
                cout << "\n";
            }
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
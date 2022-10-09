#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double n, m, a, k, l;
    cin >> n >> m >> a;
    if (n > a)
    {
        k = ceil(n / a);
    }
    else
    {
        k = 1;
    }
    if (m > a)
    {
        l = ceil(m / a);
    }
    else
    {
        l = 1;
    }
    cout << (ll)(k * l);
    return 0;
}

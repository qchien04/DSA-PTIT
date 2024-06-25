#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n + 1);
        vector<vector<long long> > f(n + 1, vector<long long>(k, 0));
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] %= k;
        }
        for (int i = 0; i < k; i++)  f[0][i] = -1e9;
        f[0][0] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                f[i][j] =max(f[i - 1][j], f[i - 1][(j - a[i] + k) % k] + 1);
            }
        }
        cout << f[n][0] << endl;
    }
}

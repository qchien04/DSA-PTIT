#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

int main() {
    int t;
    // Uncomment the next line if multiple test cases are needed
    // cin >> t;
    t = 1;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int j = 0; j < m; j++) {
            cin >> b[j];
        }

        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (a[i - 1] != b[j - 1]) {
                    dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + mod) % mod;
                } else {
                    dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] + 1) % mod;
                }
            }
        }

        cout << (dp[n][m] + 1) % mod << endl;
    }

    return 0;
}


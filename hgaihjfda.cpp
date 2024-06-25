#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_cost_to_beautify(int N, vector<int>& A, vector<int>& B) {
    vector<vector<long long>> dp(N, vector<long long>(2, LLONG_MAX));
    dp[0][0] = B[0];
    dp[0][1] = 0;
    for (int i = 1; i < N; ++i) {
        if (A[i] != A[i-1]) {
            dp[i][1] = min(dp[i][1], dp[i-1][1]);
        }
        dp[i][0] = min(dp[i][0], dp[i-1][1] + B[i]);
        dp[i][1] = min(dp[i][1], dp[i-1][0]);
        dp[i][0] = min(dp[i][0], dp[i-1][0] + B[i]);
    }
    return min(dp[N-1][0], dp[N-1][1]);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i] >> B[i];
        }
        cout << min_cost_to_beautify(N, A, B) << endl;
    }
    return 0;
}


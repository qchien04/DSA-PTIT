#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_cost_to_beautify(int N, vector<int>& A, vector<int>& B) {
    vector<vector<long long>> dp(N, vector<long long>(2, LLONG_MAX));
    
    // Base cases
    dp[0][0] = B[0]; // Cost to change A[0] to A[0] + 1 or A[0] - 1
    dp[0][1] = 0;    // Cost to leave A[0] unchanged
    
    for (int i = 1; i < N; ++i) {
        // If A[i] != A[i-1], it can be without any change if the previous one was changed
        if (A[i] != A[i-1]) {
            dp[i][1] = min(dp[i][1], dp[i-1][1]); // No cost if we don't change current A[i]
        }
        // Changing current A[i] based on previous state
        dp[i][0] = min(dp[i][0], dp[i-1][1] + B[i]); // Change A[i] if previous was unchanged
        dp[i][1] = min(dp[i][1], dp[i-1][0]);       // No cost if previous was changed
        dp[i][0] = min(dp[i][0], dp[i-1][0] + B[i]); // Change both, or previous was changed
    }

    // The result is the minimum cost to make the last element valid
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


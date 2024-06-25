#include<iostream>
using namespace std;
int gm(string s) {
	if (s[0] == '0')return 0;
	int dp[10000] = { 0 };
	dp[0] = 1;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] > '0')dp[i] = dp[i - 1];
		if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] <= '6')
			dp[i] += dp[i -2];
		cout<<dp[i]<<endl;
	}
	return dp[s.length()-1];
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		cout << gm(s) << endl;
	}
}


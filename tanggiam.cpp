#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		float M[1001];
		int dp1[1000];
		float N[1001];
		int res = INT_MIN;
		for (int i = 0; i < n; i++){
            cin>>M[i];
            cin>>N[i];
            dp1[i]=1;
		}
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++)
                if (M[i]>M[j]&&N[i]<N[j]) dp1[i] = max(dp1[i], dp1[j] + 1);
            res = max(res,dp1[i]);
        }
        cout<<res<<endl;
	}
}



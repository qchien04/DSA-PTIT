#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    if(a.size()!=b.size()) return a.size()<b.size();
    else return a<b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
    	string s;
    	cin>>s;
    	int n=s.size();
    	bool dp[n+1][n+1];
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			if(i==j) dp[i][j]=1;
    			else dp[i][j]=0;
			}
		}
		int ans=1;
    	for(int k=1;k<=n-1;k++){
    		for(int i=0;i<n-k;i++){
    			int j=i+k;
    			dp[i][j]=dp[i+1][j-1]&&(s[i]==s[j]);
    			if(s[i]==s[j]&&i==j-1) dp[i][j]=true;
    			if(dp[i][j]){
    				ans=max(ans,j-i+1);
				}
			}
		}
		cout<<ans<<endl;
    }
}

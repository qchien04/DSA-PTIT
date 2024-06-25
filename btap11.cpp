#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		int dp[n+2][n+2];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j) dp[i][j]=1;
			}
		}
		for(int k=1;k<=n-1;k++){
			for(int i=0;i<n-k;i++){
				int j=i+k;
				if(s[i]==s[j]&&i!=j){
					dp[i][j]=dp[i+1][j-1]+2;
				}
				else dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
			}
		}
		cout<<n-dp[0][n-1]<<endl;
	}
}

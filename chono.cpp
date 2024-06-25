#include <bits/stdc++.h>
using namespace std;
int Max(int a1,int a2,int a3,int a4,int a5,int a6,int a7){
	int ans=-1e9;
	ans=max(ans,a1);
	ans=max(ans,a2);
	ans=max(ans,a3);
	ans=max(ans,a4);
	ans=max(ans,a5);
	ans=max(ans,a6);
	ans=max(ans,a7);
	return ans;
}
int main(){
		int t;
		cin>>t;
		while(t--){
		int n;
		cin>>n;
		int a[4][n];
		for(int i=0;i<4;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		int dp[8][n];
		dp[0][0]=a[0][0];
		dp[1][0]=a[1][0];
		dp[2][0]=a[2][0];
		dp[3][0]=a[3][0];
		dp[4][0]=a[0][0]+a[2][0];
		dp[5][0]=a[0][0]+a[3][0];
		dp[6][0]=a[1][0]+a[3][0];
		dp[7][0]=-1e9;
		for(int i=0;i<7;i++)
		dp[7][0]=max(dp[i][0],dp[7][0]);
		for( int i=1;i<n;i++){
			int x;
			if(i==1) x=-1e9;
			else x=dp[7][i-2];
			dp[0][i]=a[0][i]+Max(x,0,dp[1][i-1],dp[2][i-1],dp[3][i-1],dp[6][i-1],-1e9);
			dp[1][i]=a[1][i]+Max(x,0,dp[0][i-1],dp[2][i-1],dp[3][i-1],dp[4][i-1],dp[5][i-1]);
			dp[2][i]=a[2][i]+Max(x,0,dp[0][i-1],dp[1][i-1],dp[3][i-1],dp[5][i-1],dp[6][i-1]);
			dp[3][i]=a[3][i]+Max(x,0,dp[0][i-1],dp[1][i-1],dp[2][i-1],dp[4][i-1],-1e9);
			dp[4][i]=a[0][i]+a[2][i]+Max(x,0,dp[1][i-1],dp[3][i-1],dp[6][i-1],-1e9,-1e9);
			dp[5][i]=a[0][i]+a[3][i]+Max(x,0,dp[1][i-1],dp[2][i-1],-1e9,-1e9,-1e9);
			dp[6][i]=a[1][i]+a[3][i]+Max(x,0,dp[0][i-1],dp[2][i-1],dp[4][i-1],-1e9,-1e9);
			dp[7][i]=-1e9;
			for(int j=0;j<7;j++)
			dp[7][i]=max(dp[j][i],dp[7][i]);
			dp[7][i]=max(dp[7][i],dp[7][i-1]);
		}
		cout<<dp[7][n-1]<<endl;
	}
}

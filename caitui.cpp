#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int Weight[n], cost[n];
		int ans=INT_MIN;
		int f[n+1][m+1];
		for (int i = 1; i <=n; i++)
			cin >> Weight[i];
		for (int i = 1; i <=n; i++)
			cin >> cost[i];
		for (int i = 0; i<=n; i++){
			for (int j = 0; j <= m; j++)
			{
				if(i==0||j==0) f[i][j]=0;
				else{
					f[i][j]=f[i-1][j];
					if(j>=Weight[i]&&f[i][j]<cost[i]+f[i-1][j-Weight[i]]) 
						f[i][j]=cost[i]+f[i-1][j-Weight[i]];
				}
				ans=max(ans,f[i][j]);
			}
		}
			
		cout << ans << endl;
	}
}

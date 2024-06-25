#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int n, m;
	cin >> m >> n;
	int a[n], b[n];
	int ans=INT_MIN;
	int f[n+1][m+1];
	for (int i = 1; i <=n; i++){
		cin >> a[i];
		b[i]=a[i];
	}
	for (int i = 0; i<=n; i++){
		for (int j = 0; j <= m; j++)
		{
			if(i==0||j==0) f[i][j]=0;
			else{
				f[i][j]=f[i-1][j];
				if(j>=a[i]&&f[i][j]<b[i]+f[i-1][j-a[i]]) f[i][j]=b[i]+f[i-1][j-a[i]];
			}
			ans=max(ans,f[i][j]);
		}
	}
		
	cout << ans << endl;
}


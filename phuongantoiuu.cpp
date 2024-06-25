#include <bits/stdc++.h>
using namespace std;
int f[1001][1001];
int a[1001], c[1001];
int n,m;
void lanvet(){
	while(n!=0){
		if(f[n][m]!=f[n-1][m]){
			cout<<"1 ";
			m=m-a[n];
		}
		else cout<<"0 ";
		n--;
	}
}
int main(){
	cin >> n >> m;
	int ans=INT_MIN;
	for (int i = 1; i <=n; i++)
		cin >> c[i];
	for (int i = 1; i <=n; i++)
		cin >> a[i];
	for (int i = 0; i<=n; i++){
		for (int j = 0; j <= m; j++)
		{
			if(i==0||j==0) f[i][j]=0;
			else{
				f[i][j]=f[i-1][j];
				if(j>=a[i]&&f[i][j]<c[i]+f[i-1][j-a[i]]) f[i][j]=c[i]+f[i-1][j-a[i]];
			}
			ans=max(ans,f[i][j]);
		}
	}
	cout << ans << endl;
	lanvet();
}

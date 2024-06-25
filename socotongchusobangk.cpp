#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main() {
	int t; cin >> t;
	while (t--) {
		int n,k;
		cin>>n>>k;
		int a[n+1][k+1];
		memset(a,0,sizeof(a));
		for(int i=1;i<=min(9,k);i++) a[1][i]=1;
		for(int i = 2; i <= n; i++){
			for(int j = 1; j <= k ; j++ ){
				for(int l=0;l<=9;l++){
					if(j>=l){
						a[i][j]=(a[i][j]+a[i-1][j-l])%mod;
					}
				}
			}
		}
		cout<<a[n][k]<<endl;
	}
}


#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main()
{
	int t;cin>>t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n+2][n+2];
		for(int i = 0; i <= n ; i++){
			for(int j = 0; j <= i ; j++){
				if(j==0||i == j){
					a[i][j] = 1;
				}
				else{
					a[i][j] = (a[i-1][j-1] + a[i-1][j]) % mod;
				}
			}
		}
		cout<<a[n][k]<<endl;
	}
}




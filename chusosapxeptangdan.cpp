#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main()
{
	int t;cin>>t;
	int  a[1005][1005];
	for(int i = 0; i < 1005 ; i++){
		for(int j = 0; j <= i ; j++){
			if(j==0||i == j){
				a[i][j] = 1;
			}
			else{
				a[i][j] = (a[i-1][j-1] + a[i-1][j]) % mod;
			}
		}
	}
	while(t--){
		int n;
		cin >> n;
		cout<<a[10+n-1][n]<<endl;
	}
}

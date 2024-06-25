#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<set>
using namespace std;
int mod= 1e9+7;
int m, n;
struct matran {
	long long f[10][10];
};
matran operator*(matran a,matran b){
	matran c;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c.f[i][j]=0;
			for(int k=0;k<n;k++){
				c.f[i][j]=(c.f[i][j]+((a.f[i][k]%mod)*(b.f[k][j]%mod))% mod )%mod;
			}
		}
	}
	return c;
}
matran luythua(matran a,long long k){
	if(k==1) return a;
	if(k%2==1) {
		matran t=luythua(a,k-1);
		return t*a;
	}
	if(k%2==0){
		matran t=luythua(a,k/2);
		return t*t;
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		long long k;
		matran a,b;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a.f[i][j];
			}
		}
		matran res=luythua(a,k);
		long long ans=0;
		for(int i=0;i<n;i++){
			ans=(ans+res.f[i][n-1])%mod;
		}
		cout<<ans<<endl;
	}
}

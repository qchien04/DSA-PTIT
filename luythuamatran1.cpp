#include <bits/stdc++.h>
using namespace std; 
long long const mod =1e9+7;
long long  a[11][11],b[11][11],res[11][11];
int n;
long long k;
void nhan(long long x[11][11],long long y[11][11]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			res[i][j]=0;
			for(int k=0;k<n;k++){
				res[i][j]+=(x[i][k]*y[k][j])%mod;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=res[i][j]%mod;
		}
	}
}
void luythua(int k){
	if(k==1) return;
	else if(k%2==0){
		luythua(k/2);
		nhan(a,a);
	}
	else {
		luythua(k-1);
		nhan(a,b);
	}
}
int main() {
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				b[i][j]=a[i][j];
			}
		}
		luythua(k);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}

    
    return 0;
}


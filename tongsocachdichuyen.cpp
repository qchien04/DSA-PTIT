#include<iostream>
#include<string>
using namespace std;
const int mod=1e9+7;
int main() {
	int t; cin >> t;
	while (t--) {
		int n,k;
		cin>>n>>k;
		long long a[n+5],b[n+5];
		a[0] = 1;
		a[1] = 1;
		for(int i=2;i<=n;i++) a[i]=0;
		for(int i = 2; i <= n; i++){
			for(int j = 1; j <= min(i,k) ; j++ ){
				a[i] += a[i - j];
				a[i] %= mod;
			}
		}
		cout<<a[n]<<endl;
	}
}


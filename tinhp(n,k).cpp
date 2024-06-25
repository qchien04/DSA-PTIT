#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
int main(){
	int t;
	cin>> t;
	while(t--){
		int n, k;
		cin>>n >> k;
		if( k > n) cout<<"0";
		else{
			long long a[n+2];
			a[0]=1;
			for(int i= 1; i <= n; i++){
				a[i]=a[i-1]*(n-i+1);
				a[i]%=mod;
			}
			cout<<a[k];
		}
		cout<<endl;
	}
}


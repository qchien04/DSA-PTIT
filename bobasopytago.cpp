#include <bits/stdc++.h>

#define endl "\n"
using namespace std;
int pitago(long long a[],int n){
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			long long can=sqrt(a[i]*a[i]+a[j]*a[j]);
			if(can*can==a[i]*a[i]+a[j]*a[j]){
				int it=lower_bound(a+j+1,a+n,can)-a;
				if(a[it]==can&&it<=n) {
					return 1;
				}
			}		
		}
	}
	return 0;
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int kt=pitago(a,n);
		if(kt) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}


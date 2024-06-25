#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long ans=0;
		sort(a,a+n);
		for(int i=n-1;i>=0;i--){
			int it=upper_bound(a,a+i,a[i]-k)-a;
			ans+=(i-it);
		}
		cout<<ans<<endl;
	}
}


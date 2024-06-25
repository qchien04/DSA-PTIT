#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++) cin>> a[i];
		sort(a,a+n);
		long long ans=0;
		for(int i=0;i<n-1;i++){
			long long it=upper_bound(a+i+1,a+n,k-a[i])-lower_bound(a+i+1,a+n,k-a[i]);
			ans+=it;
		}
		cout<<ans<<endl;
	}

}


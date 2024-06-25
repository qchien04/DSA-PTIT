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
		for(long long i=0;i<n;i++) cin>> a[i];
		sort(a,a+n);
		long long ans=0;
		for(long long i=0;i<n-2;i++){
			if(a[i]>k) break;
			for(long long j=i+1;j<n-1;j++){
				long long it=lower_bound(a+j+1,a+n,k-a[i]-a[j])-(a+j)-1;
				ans+=it;
			}
		}
		cout<<ans<<endl;
	}

}

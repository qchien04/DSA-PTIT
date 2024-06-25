#include <bits/stdc++.h>

#define endl "\n"
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		int a[n+2];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=INT_MAX;
		sort(a,a+n);
		for(int i=1;i<n;i++){
			ans=min(ans,a[i]-a[i-1]);
		}
		cout<<ans<<endl;
	}
}


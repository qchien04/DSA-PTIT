#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>> a[i];
		sort(a,a+n);
		int ans=0,ok=0;
		for(int i=0;i<n-2;i++){
			if(a[i]>k) break;
			for(int j=i+1;j<n-1;j++){
				int it=upper_bound(a+j+1,a+n,k-a[i]-a[j])-lower_bound(a+j+1,a+n,k-a[i]-a[j]);
				if(it!=0){
					ok=1;
					break;
				}
			}
			if(ok) break;
		}
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

}


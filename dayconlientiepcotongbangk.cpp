#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++) {
			cin>> a[i];
		}
		long long sum=0;
		long long ans=0;
		map<long long, long long> mp;
		for(int i=0;i<n;i++){
			sum+=a[i];
			//cout<<sum<<" ";
			if(sum==k){
				ans++;
				break;
			}
			if(mp.find(sum-k)!=mp.end()){
				ans++;
				break;
			}
			mp[sum]++;
		}
		if(ans>0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

}


#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0;
	int ans=0;
	map<int,int> mp;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum==0) ans++;
		if(mp.find(sum)!=mp.end()){
			ans+=mp[sum];
		}
		mp[sum]++;
	}
	cout<<ans<<endl;
	
}

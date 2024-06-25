#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long cnt=0;
		for(int i=n-1;i>=0;i--){
			int res=upper_bound(a,a+i+1,a[i]-k)-a;
		//	cout<<a[i]<<"vitri "<<i<<" "<<res<<endl;
			int idx=i-res;
			if(idx>=1)cnt+=idx;
		}
		cout<<cnt<<endl;	
	}
}

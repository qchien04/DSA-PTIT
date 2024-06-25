#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long cnt=0;
	for(int i=n-1;i>=0;i--){
		int res=lower_bound(a,a+n,k-a[i])-a;
		int idx=res-i-1;
		if(idx>=1)cnt+=idx;
	}
	cout<<cnt<<endl;
}


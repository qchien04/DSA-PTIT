#include <bits/stdc++.h>
using namespace std;
long long solvepp(long long b[],long long c[],long long l,long long r,long long m){
	long long res=0;
	long long i=l;
	long long j=m+1;
	long long dem=l;
	while(i<=m&&j<=r){
		if(b[i]<=b[j]){
			c[dem++]=b[i++];
		}
		else{
			c[dem++]=b[j++];
			res+=m+1-i;
		}
	}
	while(i<=m) c[dem++]=b[i++];
	while(j<=r) c[dem++]=b[j++];
	for(long long i=l;i<=r;i++) b[i]=c[i];
	return res;
}
long long solve(long long b[],long long c[],long long l,long long r){
	long long res=0;

	if (r > l){
		long long m=(l+r)/2;
		res+=solve(b,c,l,m);
		res+=solve(b,c,m+1,r);
		res+=solvepp(b,c,l,r,m);
	}
	return res;
}
int main() {
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n+2];
		long long c[n+2];
		long long m=0;
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		long long res=0;
		res=solve(a,c,0,n-1);
		cout<<res<<endl;	
	}

    return 0;
}




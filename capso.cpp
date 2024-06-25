#include <bits/stdc++.h>
using namespace std;
int solvepp(int b[],int c[],int l,int r,int m){
	int res=0;
	int i=l;
	int j=m+1;
	int dem=l;
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
	for(int i=l;i<=r;i++) b[i]=c[i];
	return res;
}
int solve(int b[],int c[],int l,int r){
	int res=0;

	if (r > l){
		int m=(l+r)/2;
		res+=solve(b,c,l,m);
		res+=solve(b,c,m+1,r);
		res+=solvepp(b,c,l,r,m);
	}
	return res;
}
int main() {
	int n;
	cin>>n;
	int a[n+2];
	int b[n+2];
	int c[n+2];
	int m=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0) b[m++]=a[i];
	}
	int res=0;
	res=solve(b,c,0,m-1);
	int cnt=0;
	a[n]=1;
	for(int i=1;i<=n;i++){
		if(a[i]%2==0&&a[i-1]%2==0){
			cnt++;
		}
		else if(a[i]%2==1&&a[i-1]%2==0){
			res-=solve(a,c,i-cnt-1,i-1);
			cnt=0;
		}
	}
	cout<<res<<endl;

    return 0;
}



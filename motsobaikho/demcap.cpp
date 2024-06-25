#include<bits/stdc++.h>
using namespace std;
int dem(int x,int b[],int c[],int n,int m){
	if(x==0) return 0;
	if(x==1) return c[0];
	int *it=upper_bound(b+0,b+m,x);
	int solg=b+m-it;
	solg+=c[0]+c[1];
	if(x==2) solg-=(c[3]+c[4]);
	if(x==3) solg+=c[2];
	return solg;
}
void trinhbaydem(int x,int b[],int c[],int n,int m){
	if(x==0) {
		cout<<0;
		return;		
	}
	if(x==1) {
		cout<<c[0];
		return;		
	}
	int *it=upper_bound(b+0,b+n,x);
	int solg=b+n-it;
	solg+=c[0]+c[1];
	if(x==2) solg-=(c[3]+c[4]);
	if(x==3) solg+=c[2];
	cout<<solg;
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m],c[5]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			if(b[i]<5){
				c[b[i]]++;
			}
		}
		int ans=0;
		sort(b,b+m);
		for(int i=0;i<n;i++){
			ans+=dem(a[i],b,c,n,m);
		//trinhbaydem(a[i],b,c,n,m)
		}
		cout<<ans<<endl;
		
	}

}

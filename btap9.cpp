#include<bits/stdc++.h>

using namespace std;
int n;
int a[100001];
int search(int u){
	if(u==a[u]) return u;
	else return a[u]=search(a[u]);
}
int main(){
	cin>>n;
	for(int i=1;i<100000;i++){
		a[i]=i;
	}
	for(int i=1;i<=n;i++){
		int u,v;
		cin>>u>>v;
		int q;
		u=search(u);
		v=search(v);
		cin>>q;
		if(q==1){
			if(u!=v) a[v]=u;
		}
		else {
			if(u==v) cout<<1;
			else cout<<0;	
		}
		cout<<endl;
	}
}

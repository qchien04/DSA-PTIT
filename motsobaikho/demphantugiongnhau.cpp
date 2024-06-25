#include <bits/stdc++.h>
using namespace std;
int n,m;
int quangdg;
int cha[1002];
struct Canh{
	int s,e;
};
vector<Canh> canh;
int timcha(int i){
	while(cha[i]>0) i=cha[i];
	return i;
}
void rscha(int i,int j){
	int x=cha[i]+cha[j];
	if(cha[i]>cha[j]){
		cha[i]=j;
		cha[j]=x;
	}
	else{
		cha[i]=x;
		cha[j]=i;
	}
}
int main()
{	
	int t;
	cin>>t;
	while(t--){
		canh.clear();
		int coct=0;
		cin>>n>>m;
		for(int i=1;i<=n;i++) cha[i]=-1;
	    for(int i=1;i<=m;i++){
			Canh a;
			cin>>a.s>>a.e;
			canh.push_back(a);
		}
			int ndinh=0,ncanh=0;
		while(ndinh<n-1&&ncanh<m){
			ncanh++;
			int u=canh[ncanh-1].s;
			int v=canh[ncanh-1].e;
			int u1=timcha(u);
			int v1=timcha(v);
			if(u1!=v1){
				rscha(u1,v1);
				ndinh++;
			}
			else{
				coct=1;
				break;
			}
		}
		if(coct) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

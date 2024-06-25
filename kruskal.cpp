#include <bits/stdc++.h>
using namespace std;
int n,m,ok,k,e,solt;
bool vs[1002];
int quangdg;
int cha[1001];
struct Canh{
	int s,e,c;
};
Canh canh[10000];
void rs(){
	memset(vs,true,sizeof(vs));
}
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
bool cmp(Canh a, Canh b){
	return a.c<b.c;
}
void kruskal(){
	int ndinh=0,ncanh=0;
	while(ndinh<n-1&&ncanh<m){
		ncanh++;
		int u=canh[ncanh].s;
		int v=canh[ncanh].e;
		int u1=timcha(u);
		int v1=timcha(v);
		if(u1!=v1){
			rscha(u1,v1);
			ndinh++;
			quangdg+=canh[ncanh].c;
		}
	}
}
int main()
{	
	int t;
	cin>>t;
	while(t--){
		quangdg=0;
		cin>>n>>m;
		rs(); 
		for(int i=1;i<=n;i++) cha[i]=-1;
	    for(int i=1;i<=m;i++){
			int s,e,ts;
			cin>>s>>e>>ts;
			canh[i].s=s;
			canh[i].e=e;
			canh[i].c=ts;	
		}
		sort(canh+1,canh+m+1,cmp);
		kruskal();
		cout<<quangdg<<endl;
	}
}

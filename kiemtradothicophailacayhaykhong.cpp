#include <bits/stdc++.h>
using namespace std;
int n,m;
bool check;
int cha[1001];
class Canh{
	public:
		int s,e,c;
		bool operator < (const Canh &op) const {
            return c <= op.c;
        }
};
vector<Canh> canh(1001);
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
void kruskal(){
	int ndinh=0,ncanh=0;
	check=true;
	while(ndinh<n-1&&ncanh<m){
		ncanh++;
		int u=canh[ncanh].s;
		int v=canh[ncanh].e;
		int u1=timcha(u);
		int v1=timcha(v);
		if(u1!=v1){
			rscha(u1,v1);
			ndinh++;
		}
	}
	if(ndinh!=n-1) check=false;
}
int main()
{
	int t;
	cin>>t;
	while(t--){		
		canh.clear();
		cin>>n;
		m=n-1;
		for(int i=1;i<=m;i++){
			int s,e;
			cin>>s>>e;
			canh[i].s=s;
			canh[i].e=e;
		}
		for(int i=1;i<=n;i++) cha[i]=-1;
		kruskal();
		if(check) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
		
	
}



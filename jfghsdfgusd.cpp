#include <bits/stdc++.h>
using namespace std;
int n,m,ok=0,k,e,solt;
bool vs[1002];
vector<vector<int> > dske(1002);
void rs(){
	for(int i=0;i<=n;i++) vs[i]=true;
}
void dfsdq(int u){
	if(ok==1) return;
	vs[u]=false;
	for(auto x:dske[u]){
		if(vs[x){
			dfsdq(x);
		}
		else if(x!=u){
			ok=1;
			return;
		}
	}
}
bool kiemtraeuler(){
	for(int i=1;i<=n;i++){
		if(vs[i]&&!ok){
			dfsdq(i);
		}
	}
	if(ok) return true;
	return false;
}
int main()
{
	int t;cin>>t;
	while(t--){
		ok=0;
		truoc.clear();
		for(int i=0;i<1002;i++){
			dske[i].clear();
		}
		cin>>n>>m;
		int x,y;
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			dske[x].push_back(y);
		}
		rs();
		if(kiemtraeuler()){
			cout<<"YES";
		}
		else cout<<"NO";
		cout<<endl;
	}

}

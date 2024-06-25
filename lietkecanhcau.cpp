#include <bits/stdc++.h>
using namespace std;
int n,m,ok,k,e,solt;
bool vs[1002];
pair<int,int> pa[100002];
vector<pair<int,int> > ans;
vector<vector<int> > dske(1002);

void taitao(){
	for(int i=0;i<=n;i++) vs[i]=true;
}
void dfsdq(int u){
	for(int i=0;i<dske[u].size();i++){
		if(vs[dske[u][i]]){
			vs[dske[u][i]]=false;
			dfsdq(dske[u][i]);
		}
	}
}
int demtplthong(){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(vs[i]){
			dfsdq(i);
			dem++;
		}
	}
	return dem;
}
void reset() {
    for (int i = 0; i < 1002; i++)
        dske[i].clear();
    memset(vs, true, 1002);
}
void dfs(int u,int s,int l){
	vs[u]=false;
	for(auto x:dske[u]){
		if(u==s&&x==l || u==l&&x==s) continue;
		else if(vs[x]){
			vs[x]=false;
			dfsdq(x);
		}
	}
}
int demtplthong2(int s, int l){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(vs[i]){
			dfs(i,s,l);
			dem++;
		}
	}
	return dem;
}
void canhcau3(){
	for(int i=0;i<m;i++){
		memset(vs, true, 1002);
		int ltsauxoa=demtplthong(pa[i].first,pa[i].second);
		if(ltsauxoa>solt) 	ans.push_back(pa[j]);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int x,y;
		for(int i=0;i<1002;i++){
			dske[i].clear();
		}
		taitao();
		ans.clear();
	    for(int i=0;i<m;i++){
	    	cin>>x>>y;
	   	    pa[i].first=x;
	    	pa[i].second=y;
	    	dske[y].push_back(x);
	    	dske[x].push_back(y);
		}
		sort(pa,pa+m);
		solt=demtplthong();
		canhcau3();
		for(int i=0;i<ans.size();i++){
			cout<<ans[i].first<<" "<<ans[i].second<<" ";
		}
		cout<<endl;	
	}
}



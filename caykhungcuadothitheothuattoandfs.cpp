#include <bits/stdc++.h>
using namespace std;
int n,m;
bool vs[1002];
int truoc[1001];
vector<pair<int,int> > ans;
vector<vector<int> > dske(1003);
void rs(){
	memset(vs,true,sizeof(vs));
}
void tree1(int u){
	vs[u]=false;
	if(ans.size()==(n-1)) return;
	for(int i=0;i<dske[u].size();i++){
		int v=dske[u][i];
		if(vs[v]){
			pair<int,int> p;
			p.first=u;
			p.second=v;
			ans.push_back(p);
		//	if(ans.size()==(n-1)) return;
			tree1(v);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		ans.clear();
		cin>>n>>m;
		int sta;
		cin>>sta;
		rs();
		for(int i=1;i<=n;i++) dske[i].clear();
	    for(int i=0;i<m;i++){
			int s,e;
			cin>>s>>e;
			dske[s].push_back(e);
			dske[e].push_back(s);
		}
		truoc[0]=sta;
		tree1(sta);
		if(ans.size()<n-1) cout<<"-1"<<endl;
		else{
			for(int i=0;i<ans.size();i++){
				cout<<ans[i].first<<" "<<ans[i].second<<endl;
			}
		}
	}
}



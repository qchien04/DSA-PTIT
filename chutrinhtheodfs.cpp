#include <bits/stdc++.h>
using namespace std;
int n,m,ok=0,k,e,solt;
bool vs[1002];
vector<vector<int> > dske(1002);
vector<int> check(1002);
vector<int> truoc(1002);
void dfsdq(int u){
	if(ok==1) return;
	check[u]=0;
	for(int i=0;i<dske[u].size();i++){
		int v=dske[u][i];
		if(check[v]){
			truoc[v]=u;
			dfsdq(v);
		}
		else if(v==1&&truoc[u]!=1){
			truoc[1]=u;
			ok=1;
			return;
		}
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		vector<int> ans;
		ok=0;
		ans.clear();
		for(int i=0;i<1002;i++){
			dske[i].clear();
		}
		cin>>n>>m;
		int x,y;
		check.clear();
		check.resize(n+1,1);
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			dske[x].push_back(y);
			dske[y].push_back(x);
		}
		for(int i = 0; i < n; i++){
			sort(dske[i].begin(),dske[i].end());
		}
		truoc[1]=0;
		dfsdq(1);
		if(truoc[1]==0) cout<<"NO";
		else{
			ans.push_back(1);
			int dau=1;
			while(truoc[dau]!=1){
				ans.push_back(truoc[dau]);
				dau=truoc[dau];
			}
			ans.push_back(truoc[dau]);
			for(int i=ans.size()-1;i>=0;i--){
				cout<<ans[i]<<" ";
			}
		}
		cout<<endl;
	}
}




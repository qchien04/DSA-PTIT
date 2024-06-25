#include <bits/stdc++.h>
using namespace std;
int a[1002][1002],n,m,ok,k,e,vs[1002];
vector<vector<int> > dske(10005);
vector<int> ans;
void dfs(int u,vector<vector<int> >& res){//tim kiem bat dau tu vi tri u
	ans.push_back(u);
	int check=0;
	vs[u]=false;
	for(int i=0;i<dske[u].size();i++){
		int v=dske[u][i];
		if(vs[v]){
			check=1;
			dfs(v,res);
			ans.pop_back();
		}
	}
	if(!check){
		res.push_back(ans);
	}
}
bool cmp(vector<int> a,vector<int> b){
	return a[a.size()-1]<b[b.size()-1];
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		vector<vector<int> > res;
		for(int i=0;i<=n;i++) dske[i].clear();
		ans.clear();
	    for(int i=0;i<=n;i++) vs[i]=true;
	    for(int i=0;i<n-1;i++){
	    	int x,y;
	    	cin>>x>>y;
	    	dske[x].push_back(y);
		}
		dfs(1,res);
		sort(res.begin(),res.end(),cmp);
		for(int i=0;i<res.size();i++){
			for(int j=0;j<res[i].size();j++){
				cout<<res[i][j]<<" ";
			}
			cout<<endl;
		}
		
	}
}


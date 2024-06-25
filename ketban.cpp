#include <bits/stdc++.h>
using namespace std;
int n,m,ok,k,e,solt;
bool vs[100002];
vector<vector<int> > dske(100002);
int dem;
int result=INT_MIN;
void taitao(){
	for(int i=0;i<=n;i++) vs[i]=true;
}
void dfsdq(int u){
	vs[u]=false;
	for(int i=0;i<dske[u].size();i++){
		if(vs[dske[u][i]]){
			dem++;
			result=max(dem,result);
			dfsdq(dske[u][i]);
		}
	}
}
void demban(){
	for(int i=1;i<=n;i++){
		dem=1;
		if(vs[i]){
			dfsdq(i);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		result=INT_MIN;
		cin>>n>>m;
		int x,y;
		for(int i=0;i<100002;i++){
			dske[i].clear();
		}
		taitao();
	    for(int i=0;i<m;i++){
	    	cin>>x>>y;
	    	dske[y].push_back(x);
	    	dske[x].push_back(y);
		}
		demban();
		cout<<result<<endl;	
	}
}

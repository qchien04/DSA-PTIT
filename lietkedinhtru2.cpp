#include <bits/stdc++.h>
// TAT CA LA DO KHONG KHAI BAO DU BO NHO CHO CAI MANG CHUA CAP CANH CAY VCLLLLLLLLLLL;
using namespace std;
int n,m,ok,k,e,solt;
bool vs[1002];
pair<int,int> pa[100002];
vector<int> ans;
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
void dinhtru(){
	for(int j=1;j<=n;j++){
		taitao();
		vs[j]=false;
		int ltsauxoa=demtplthong();
		if(ltsauxoa>solt) 	ans.push_back(j);
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
		solt=demtplthong();
		dinhtru();
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;	
	}
}



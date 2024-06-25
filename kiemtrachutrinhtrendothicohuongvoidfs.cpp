#include <bits/stdc++.h>
using namespace std;
int n,m,ok=0,k,e,solt;
bool vs[1002];
vector<vector<int> > dske(1002);
vector<int> truoc(1002);
vector<int> check(1002);
void dfsdq(int u){
	if(ok==1) return;
	check[u]=0;
	for(int i=0;i<dske[u].size();i++){
		if(check[dske[u][i]]==1){
			dfsdq(dske[u][i]);
		}
		else if(check[dske[u][i]]==0){
			ok=1;
			return;
		}
	}
	check[u]=2;
}
bool kiemtraeuler(){
	for(int i=1;i<=n;i++){
		if(check[i]&&!ok){
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
		}
		if(kiemtraeuler()){
			cout<<"YES";
		}
		else cout<<"NO";
		cout<<endl;
	}
}



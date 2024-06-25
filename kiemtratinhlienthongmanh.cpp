#include <bits/stdc++.h>
// TAT CA LA DO KHONG KHAI BAO DU BO NHO CHO CAI MANG CHUA CAP CANH CAY VCLLLLLLLLLLL;
using namespace std;
int n,m,ok,k,e,solt;
bool vs[1002];
pair<int,int> pa[100002];
vector<vector<int> > dske(1002);

void taitao(){
	for(int i=0;i<=n;i++) vs[i]=true;
}
void dfsdq(int u){
    vs[u]=false;
	for(int i=0;i<dske[u].size();i++){
		if(vs[dske[u][i]]){
			dfsdq(dske[u][i]);
		}
	}
}
bool kiemtra(){
	for(int i=1;i<=n;i++){
		if(vs[i]) return false;
	}
	return true;
}
bool ltmanh(){
	for(int i=1;i<=n;i++){
		dfsdq(i);
		if(!kiemtra()) return false;
		taitao();
	}
	return true;;
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
	    for(int i=0;i<m;i++){
	    	cin>>x>>y;
	    	dske[x].push_back(y);
		}	taitao();
		if(ltmanh()) cout<<"YES";
		else cout<<"NO";
		cout<<endl;	
	}
}

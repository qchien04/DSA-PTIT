#include <bits/stdc++.h>
// mot do thi co nhieub thanh phan lien thong ma tat ca cac thanh phan lien thong la do thi 2 phia thi van cout<<"yes";
using namespace std;
int n,m;
bool vs[1002];
vector<vector<int> > dske(1003);
bool flag;
bool dothi2phia(int u){
	flag=true;
	vector<int> x,y;
	x.push_back(u);
	set<int> s1,s2;
	s1.insert(u);
	while(1){
		for(int i=0;i<x.size();i++){
			int v=x[i];
			for(int j=0;j<dske[v].size();j++){
				int ob=dske[v][j];
				if(s1.count(ob)==0){
					if(s2.count(ob)==0) y.push_back(ob),s2.insert(ob);;
				}
				else{
					flag=false;
				}
			}
		}
		x.clear();
		for(int i=0;i<y.size();i++){
			int v=y[i];
			for(int j=0;j<dske[v].size();j++){
				int ob=dske[v][j];
				if(s2.count(ob)==0){
					if(s1.count(ob)==0)x.push_back(ob),s1.insert(ob);;
				}
				else{
					flag=false;
				}
			}
		}
		y.clear();
		if(!flag) {
			return false;
		}
		if(x.size()==0&&y.size()==0){
			return true;
		}
	}
}
bool kiemtra(){
	for(int i=1;i<=n;i++){
		if(!dothi2phia(i)) return false;
	}
	return true;
}
int main()
{	
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<=n;i++){
			dske[i].clear();
		}
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			dske[x].push_back(y);
			dske[y].push_back(x);
		}
		if(kiemtra()){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
		
	}
}



#include <bits/stdc++.h>
using namespace std;
int n,m,ok;
bool vs[1002];
int a[1003][1003];
vector<int> dske[1002];
//void hamilton(int dem,int i){
//	for(int j=1;j<=n;j++){
//		if(a[i][j]==1&&vs[j]){
//			vs[j]=false; 
//			if(dem<n-1) hamilton(dem+1,j);
//			else {
//				ok=1;
//			}
//			vs[j]=true;
//		}
//	}
//}
void hamilton(int dem,int i){
	for(int j=0;j<dske[i].size();j++){
		int u=dske[i][j];
		if(a[i][u]&&vs[u]){
			vs[u]=false;
			if(dem<n-1)hamilton(dem+1,u);
			else {
				ok=1;
			}
			vs[u]=true;
		}
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		for(int i=1;i<1002;i++) dske[i].clear();
		for(int i=1;i<=1002;i++){
			for(int j=1;j<=1002;j++){
				a[i][j]=0;
			}
		}
		ok=0;
		cin>>n>>m;
	    for(int i=0;i<m;i++){
			int s,e;
			cin>>s>>e;
			a[s][e]=1;
			a[e][s]=1;
			dske[s].push_back(e);
			dske[e].push_back(s);
		}
		for(int i=1;i<=n;i++){
			memset(vs,true,sizeof(vs));
			vs[i]=false;
			hamilton(1,i);
			if(ok) {
				cout<<"1"<<endl;
				break;
			}
		}
		if(!ok) cout<<"0"<<endl;
	}
}


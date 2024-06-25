#include<bits/stdc++.h>

using namespace std;

int n,m,s,e;
int ok;
int a[1005][1005];
bool vs[1001];
int behind[1005];
void init(){
	for(int i=0;i<1002;i++) behind[i]=-1;
	memset(vs,true,sizeof(vs));
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			a[i][j]=0;
		}
	}
}
void bfsqueue(int u){
	queue<int> q;
	q.push(u);
	vs[u]=false;
	while(!q.empty()){
		u=q.front();
		q.pop();
		for(int i=1;i<=n;i++){
			if(vs[i]&&a[u][i]){
				q.push(i);
				vs[i]=false;
				behind[i]=u;
				if(i==e){
					ok=1;
					return;
				}
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		vector<int> ans;
		ok=0;
		cin>>n>>m>>s>>e;
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			a[x][y]=1;
		}
		bfsqueue(s);
		if(ok){
			ans.push_back(e);
			int tmp=e;
			while(behind[tmp]!=s){
				ans.push_back(behind[tmp]);
				tmp=behind[tmp];
			}
			ans.push_back(s);
			for(int i=ans.size()-1;i>=0;i--){
				cout<<ans[i]<<" ";
			}
		}
		else cout<<-1;
		cout<<endl;
	}
	return 0;
}


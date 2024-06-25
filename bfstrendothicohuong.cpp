#include <bits/stdc++.h>
using namespace std;
int a[1002][1002],n,m,k,vs[1002];
vector<int> ans;
void init(){
	ans.clear();
	memset(vs,true,sizeof(vs));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=0;
		}
	}
}
void bfsqueue(int u){//tim kiem bat dau tu vi tri u
	queue<int> q;
	q.push(u);
	ans.push_back(u);
	vs[u]=false;
	while(!q.empty()){
		u=q.front();
		q.pop();
		for(int i=1;i<=n;i++){
			if(vs[i]&&a[u][i]){
				q.push(i);
				vs[i]=false;
				ans.push_back(i);
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
	    init();
	    for(int i=0;i<m;i++){
	    	int x,y;
	    	cin>>x>>y;
	    	a[x][y]=1;
		}
		bfsqueue(k);
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;	
	}
}


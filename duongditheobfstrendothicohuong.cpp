#include <bits/stdc++.h>
using namespace std;
int a[1002][1002],n,m,ok,k,e,vs[1002];
int behind[1002];
vector<int> ans;
void init(){
	ok=0;
	for(int i=1;i<1002;i++) behind[i]=-1;
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
	vs[u]=false;
	while(!q.empty()){
		u=q.front();
		q.pop();
		for(int i=1;i<=n;i++){
			if(vs[i]&&a[u][i]){
				q.push(i);
				vs[i]=false;
				behind[i]=u;
				if(i==e) {
					ok=1;
					return;
				}
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m>>k>>e;
	    init();
	    for(int i=0;i<m;i++){
	    	int x,y;
	    	cin>>x>>y;
	    	a[x][y]=1;
		}
		bfsqueue(k);
		if(ok){
			ans.push_back(e);
			int tg=e;
			while(1){
				ans.push_back(behind[tg]);
				tg=behind[tg];
				if(behind[tg]==k){
					ans.push_back(k);
					break;
				}		
			}
			for(int i=ans.size()-1;i>=0;i--){
				cout<<ans[i]<<" ";
			}	
		}
		else cout<<"-1";
		cout<<endl;	
	}
}


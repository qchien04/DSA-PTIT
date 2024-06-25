#include <bits/stdc++.h>
using namespace std;
int a[1002][1002],n,m,ok,k,e,vs[1002];
int behind[1002];
vector<int> ans;
void init(){
	for(int i=1;i<1002;i++) behind[i]=-1;
	ans.clear();
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
				if(i==1) {
					ok=1;
					return;
				}
			}
		}
	}
}
void dfsstack(int u){//tim kiem bat dau tu vi tri u
	stack <int> st;
	int s,t;
	st.push(u);
	vs[u]=false;
	while(!st.empty()){
		s=st.top();
		st.pop();
		for(int i=1;i<=n;i++){
			if(vs[i]&&a[s][i]){
				vs[i]=false;
				st.push(s);
				st.push(i);
				behind[i]=s;
				if(i==e) {
					ok=1;
					return;
				}
				break;
			}
		}
	}
}
int main()
{
	cin>>n>>m;
    init();
    for(int i=0;i<m;i++){
    	int x,y;
    	cin>>x>>y;
    	a[x][y]=1;
    	a[y][x]=1;
	}
	for(int i=2;i<=n;i++){
		memset(vs,true,sizeof(vs));
		ok=0;
		ans.clear();
		e=i;
		dfsstack(1);
		if(ok){
			ans.push_back(e);
			int tg=e;
			while(behind[tg]!=1){
				ans.push_back(behind[tg]);
				tg=behind[tg];	
			}
			ans.push_back(1);
			for(int i=ans.size()-1;i>=0;i--){
				cout<<ans[i]<<" ";
			}	
		}
		else cout<<"-1";
		cout<<endl;	
		
		//bfs quay ve 1
		memset(vs,true,sizeof(vs));
		ok=0;
		ans.clear();
		bfsqueue(i);
		if(ok){
			ans.push_back(1);
			int tg=1;
			while(behind[tg]!=i){
				ans.push_back(behind[tg]);
				tg=behind[tg];	
			}
			ans.push_back(i);
			for(int i=ans.size()-1;i>=0;i--){
				cout<<ans[i]<<" ";
			}	
		}
		else cout<<"-1";
		cout<<endl;	
	}
}


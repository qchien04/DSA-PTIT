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
void dfsstack(int u){//tim kiem bat dau tu vi tri u
	stack <int> st;
	int s,t;
	st.push(u);
	vs[u]=false;
	ans.push_back(u);
	while(!st.empty()){
		s=st.top();
		st.pop();
		for(int i=1;i<=n;i++){
			if(vs[i]&&a[s][i]){
				vs[i]=false;
				st.push(s);
				st.push(i);
				ans.push_back(i);
				break;
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
	    	a[y][x]=1;
		}
		dfsstack(k);
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;	
	}
}


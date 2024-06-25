#include<bits/stdc++.h>

using namespace std;

vector<int> dske[200001];
bool vs[200001];
long long val[200001];

int dfs(int u){
	val[u]=1;
	int size1=0;
	for(auto x:dske[u]){
        size1+=dfs(x);
        val[u]+=val[x];
	}
	val[u]+=size1;
	//cout<<val[u]<<" so "<<u<<endl;
	return size1+1;
}
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		int x;
		cin>>x;
		dske[x].push_back(i);
	}
	dfs(1);
	for(int i=1;i<=n;i++){
		cout<<val[i]<<" ";
	}
}



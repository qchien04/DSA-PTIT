#include<bits/stdc++.h>

using namespace std;

vector<int> ke[1001];
bool check[1001];
int ok;
string res;
int n,m;
void bfsqueue(int u,int v){
	queue<pair<int,string> > q;
	q.push({u,to_string(u)});
	while(!q.empty()){
		pair<int,string> p=q.front();
		q.pop();
		check[p.first]=true;
		for(int i=0;i<ke[p.first].size();i++){
			if(check[ke[p.first][i]]==false){
				check[ke[p.first][i]]=true;
				if(ke[p.first][i]==v){
					ok=1;
					res=p.second+" "+to_string(ke[p.first][i]);
				}
				q.push({ke[p.first][i],p.second+" "+to_string(ke[p.first][i])});
			}
		}
	}
}
void dfsdq(int a,string s,int v){
	check[a]=true;
	for(int i=0;i<ke[a].size();i++){
		if(check[ke[a][i]]==false){
			if(ke[a][i]==v){
				ok=1;
				res=s+" "+to_string(ke[a][i]);
			}
			dfsdq(ke[a][i],s+" "+to_string(ke[a][i]),v);
		}
	}
}
int main(){
	for(int i=0;i<1001;i++){
		ke[i].clear();
	}
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i=2;i<=n;i++){
		memset(check,false,sizeof(check));
		ok=0;
		res="";
		dfsdq(1,"1",i);
		if(ok) cout<<res;
		else cout<<-1;
		cout<<endl;
		memset(check,false,sizeof(check));
		ok=0;
		res="";
		bfsqueue(i,1);
		if(ok) cout<<res;
		else cout<<-1;
		cout<<endl;
	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;
int n,m,ok,k,e,solt;
bool check;
vector<vector<pair<int,int> > > dske(1005);
class Canh{
	public:
		int s,e,c;
		bool operator < (const Canh &op) const {
            return c <= op.c;
        }
};
void dijkstra(int s){
	vector<int> d(1005,10000000);
	vector< pair<int,int> > T;
	d[s]=0;
	T.push_back({0,s});
	while(T.size()){
		sort(T.begin(), T.end());
		pair< int, int > p;
		p=T[0];
		T.erase(T.begin());
		for(int i = 0; i < dske[p.second].size(); i++){
			pair<int,int> v=dske[p.second][i];
			if(d[v.first] > v.second + d[p.second]) {
				d[v.first] = v.second + d[p.second];
				T.push_back({d[v.first],v.first});
			}
		}
	}
	for(int i=1;i<=n;i++){
			cout<<d[i]<<" ";
		}
		cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int sta;
		cin>>n>>m>>sta;
		for(int i=1;i<=n;i++){
			dske[i].clear();
		}
		for(int i=1;i<=m;i++){
			int s,e,ts;
			cin>>s>>e>>ts;
			pair<int,int> p;
			p.first=e;
			p.second=ts;
			dske[s].push_back(p);
			p.first=s;
			dske[e].push_back(p);
		}
		dijkstra(sta);
	}
}

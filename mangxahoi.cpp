#include <bits/stdc++.h>
using namespace std;
int n,m,ok,k,e,solt;
bool vs[1002];
vector<vector<int> > dske(10002);
int dem;
int result=INT_MIN;
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int x,y;
		for(int i=0;i<1002;i++){
			dske[i].clear();
		}
	    for(int i=0;i<m;i++){
	    	cin>>x>>y;
	    	dske[y].push_back(x);
	    	dske[x].push_back(y);
		}
		bool res;
		for(int i=1;i<n;i++){
            for(auto j:dske[i]){
                if(dske[i].size()!=dske[j].size()){
                   cout<<"NO"<<endl;
                   goto flag;
                }
            }
		}
		cout<<"YES"<<endl;
		flag:;
	}
}



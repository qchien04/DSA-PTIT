#include <bits/stdc++.h>
using namespace std;
int a[1002][1002],n,m,k,vs[1002];
vector<int> ans;
void init(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
}
int main()
{
	cin>>n;
    init();
    int m=-1;
    vector< vector<int> > ve;
	for(int i=1;i<=n;i++){
		vector<int> tmp;
		for(int j=1;j<=n;j++){
			if(a[i][j]){
				tmp.push_back(j);
			}
		}
		ve.push_back(tmp);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<ve[i].size();j++){
			cout<<ve[i][j]<<" ";
		}
		cout<<endl;
	}
}


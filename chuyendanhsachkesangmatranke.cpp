#include <bits/stdc++.h>
using namespace std;
int a[1002][1002],n,m,k,vs[1002];
vector<int> ans;
void init(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=0;
		}
	}
}
int main()
{
	cin>>n;
	cin.ignore();
    init();
    int m=-1;
    for(int i=1;i<=n;i++){
    	int x;
    	string s;
    	getline(cin,s);
    	stringstream ss(s);
    	while(ss>>x){
    		a[x][i]=1;
    		a[i][x]=1;
    		m=max(n,x);
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

}


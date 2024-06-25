#include <bits/stdc++.h>
using namespace std;
int dx[2]={0,1};
int dy[2]={1,0};
int a[100][100];
int n;
bool ok;
void quaylui(int i,int j,string s){
	if(i==n&&j==n){
		ok=true;
		cout<<s<<" ";
		return;
	}
	for(int k=1;k>=0;k--){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1<=n&&j1<=n&&i1>=1&&j1>=1&&a[i1][j1]==1){
			string c;
			if(k==0) c="R";
			if(k==1) c="D";
			quaylui(i1,j1,s+c);
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ok=false;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		if(a[1][1]==1) quaylui(1,1,"");
		if(!ok) cout<<"-1";
		cout<<endl;

	}
	
}

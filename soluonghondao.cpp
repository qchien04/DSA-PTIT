#include<bits/stdc++.h>
using namespace std;
int sx,sy,ex,ey,n,m;
int dx[8]={1,1,1,-1,-1,-1,0,0};
int dy[8]={0,1,-1,-1,0,1,1,-1};
int a[502][502];
void loang(int i,int j){
	a[i][j]=0;
	for(int l=0;l<8;l++){
		int i1=i+dx[l];
		int j1=j+dy[l];
		if(i1>=1&&j1>=1&&i1<=n&&j1<=m&&a[i1][j1]==1){
			loang(i1,j1);
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		int dem=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]) loang(i,j),dem++;
			}
		}
		cout<<dem<<endl;
	}
}


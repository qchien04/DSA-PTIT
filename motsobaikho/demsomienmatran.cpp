
#include<bits/stdc++.h>
using namespace std;
int mt[101][101];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
void  itry(int i,int j,int n,int m){
	mt[i][j]=0;
	for(int l=0;l<8;l++){
		int i1=i+dx[l];
		int j1=j+dy[l];
		if(i1>=0&&i1<n&&j1>=0&&j1<m&&mt[i1][j1]==1){
			itry(i1,j1,n,m);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while (t--){
		int n,m;
		cin>>n>>m;
		int dem=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>mt[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(mt[i][j]==1){
					dem++;
					itry(i,j,n,m);
				}
			}
		}
		cout<<dem<<endl;
	}
}

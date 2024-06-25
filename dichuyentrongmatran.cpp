#include<bits/stdc++.h>
using namespace std;
int n,m;
int dx[2]={0,1};
int dy[2]={1,0};
int a[101][101];
int b[101][101];
int dem=0; 
void loang(int i,int j){
	if(i==n&&j==m) {
		dem++; 
		return;
	}
	for(int l=0;l<2;l++){
		int i1=i+dx[l];
		int j1=j+dy[l];
		if(i1>=1&&j1>=1&&i1<=n&&j1<=m){
			loang(i1,j1);
		}
	}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        string s;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        loang(1,1);
		cout<<dem;
		dem=0;
        cout<<endl;

    }
}



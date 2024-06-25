#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n+2][m+2];
		int b[n+2][m+2];
		int res=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				b[i][j]=a[i][j];
			}
		}
		for(int i=1;i<n;i++){
			for(int j=1;j<m;j++){
				if(a[i][j]==0) b[i][j]=0;
				else{
					b[i][j]+=min(b[i-1][j-1],min(b[i-1][j],b[i][j-1]));
				}
				res=max(res,b[i][j]);
			}
		}
		cout<<res<<endl;
	}
    return 0;
}



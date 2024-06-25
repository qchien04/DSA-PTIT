#include <bits/stdc++.h>
using namespace std;
typedef struct{
	int i,j,cnt;
}location;
int main() {
    int t;
    cin >> t;
    while (t--) {
    	int n,m;
    	cin>>n>>m;
    	int a[n+1][m+1];
    	bool checkv[1001][1001];
		memset(checkv, true, sizeof(checkv));
    	queue< location > q;
    	for(int i=1;i<=n;i++){
    		for(int j=1;j<=m;j++){
    			cin>>a[i][j];
			}
		}
		location c;
		c.i=1;
		c.j=1;
		c.cnt=0;
		q.push(c);
		int check=0;
		int ans=100000;
		while(q.size()){
			location x;
			x=q.front();
			if(x.i==n&&x.j==m){
				check=1;
				ans=min(ans,x.cnt);
			}
			x.cnt++;
			q.pop();
			if(x.j+a[x.i][x.j]<=m){
				location tmp=x;
				tmp.j=x.j+a[x.i][x.j];
				if(checkv[tmp.i][tmp.j]) {
					q.push(tmp);
					checkv[tmp.i][tmp.j]=false;
				}
			}
			if(x.i+a[x.i][x.j]<=n){
				location tmp=x;
				tmp.i=x.i+a[x.i][x.j];
				if(checkv[tmp.i][tmp.j]) q.push(tmp),checkv[tmp.i][tmp.j]=false;
			}
		}
		if(check==0) cout<<"-1";
		else cout<<ans<<endl;
		cout<<endl;
    }
    return 0;
}

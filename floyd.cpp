#include <bits/stdc++.h>
using namespace std;
int n,m,ok,k,e,solt;
bool check;
int maxx=1e9;
int a[105][105],d[105][105],s[105][105];
void floy(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			d[i][j]=a[i][j];
//			if(d[i][j]==max) s[i][j]=0;
//			else s[i][j]=j;		
		}
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(d[i][k]!=maxx&&d[k][j]!=maxx&&d[i][j]>d[i][k]+d[k][j]){
					d[i][j]=d[i][k]+d[k][j];
				//	s[i][j]=s[i][k];
				}
			}	
		}
	}
}
int main()
{
	int sta;
	cin>>n>>m;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			a[i][j]=maxx;
			if(i==j) a[i][j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		int s,e,ts;
		cin>>s>>e>>ts;
		a[s][e]=ts;
		a[e][s]=ts;
	}
	floy();
	cin>>sta;
	while(sta--){
		int s,e;
		cin>>s>>e;
		cout<<d[s][e]<<endl;
	}
}







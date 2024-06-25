#include <bits/stdc++.h>
using namespace std;
typedef class ob{
	public: 
		int x;
		int y;
		int pre_location;
		int change;
};
int n,m;
char a[502][502];
int xs,ys,xe,ye;
int ox[4]={1,0,0,-1};
int oy[4]={0,-1,1,0};
bool solve(ob x){
	queue<ob> q;
	q.push(x);
	while(q.size()){
		ob tmp=q.front();
		q.pop();
		if(tmp.x==xe&&tmp.y==ye&&tmp.change<=2) return 1;
		for(int i=0;i<4;i++){
			int i1=tmp.x+ox[i];
			int j1=tmp.y+oy[i];
			if(i1>=1&&i1<=m&&j1<=n&&j1>=1&&a[j1][i1]!='*'){
				ob next;
				next.x=i1;
				next.y=j1;
				next.pre_location=i;
				if(tmp.pre_location!=i) next.change=tmp.change+1;
				else next.change=tmp.change;
				if(next.x==xe&&next.y==ye&&next.change<=2) return 1;
				if(next.change<=2) q.push(next);
			}
		}
		
	}
	return 0;
}
void nhap(){
	cin>>n>>m;
	string s[n+1];
	for(int i=1;i<=n;i++) cin>>s[i];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			a[i][j]=s[i][j-1];
			if(a[i][j]=='S') ys=i,xs=j;
			if(a[i][j]=='T') ye=i,xe=j;
		}
	ob x;
	x.x=xs;
	x.y=ys;
	x.change=-1;
	x.pre_location=-1;
	if(solve(x)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		nhap();
	}

}

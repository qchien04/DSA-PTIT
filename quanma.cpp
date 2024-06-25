#include<bits/stdc++.h>
using namespace std;
int sx,sy,ex,ey,n;
int dx[8]={2,1,-2,-1,-2,-1,2,1};
int dy[8]={-1,-2,-1,-2,1,2,1,2};
int a[10][10];
struct loc{
	int x,y,stt;
};
bool check=false;
int main() {
	int t;
	cin>>t;
	while(t--){
	int ans;
	check=false;
	n=8;
	queue<loc> q;
	loc st,gain;
	string s1,s2;
	cin>>s1>>s2;
	st.x=s1[0]-'a'+1;
	st.y=s1[1]-'0';
	st.stt=0;
	gain.x=s2[0]-'a'+1;
	gain.y=s2[1]-'0';
	if(st.x==gain.x&&st.y==gain.y){
		ans=0;
	}
	else q.push(st);
	while(q.size()){
		loc tmp=q.front();
		q.pop();
		for(int l=0;l<8;l++){
			loc nap;
			int i1=tmp.x+dx[l];
			int j1=tmp.y+dy[l];
			if(i1>=1&&j1>=1&&i1<=n&&j1<=n){
				nap.x=i1;
				nap.y=j1;
				nap.stt=tmp.stt+1;
				q.push(nap);
				if(i1==gain.x&&j1==gain.y){
					ans=nap.stt;
					check=true;
					break;
				}
			}
		}
		if(check){
			break;
		}
	}
	cout<<ans<<endl;
	}
}






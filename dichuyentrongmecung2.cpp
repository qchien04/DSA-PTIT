#include<bits/stdc++.h>
using namespace std;
int sx,sy,ex,ey,n;
int dx[4]={0,-1,1,0};
int dy[4]={1,0,0,-1};
int a[101][101];
bool b[101][101];
bool check=false;
vector <string> ve;
void loang(int i,int j,string s){
	if(i==n&&j==n) {
		check=true;
		ve.push_back(s);
		//cout<<s<<" ";
		return;
	}
	for(int l=0;l<4;l++){
		int i1=i+dx[l];
		int j1=j+dy[l];
		if(i1>=1&&j1>=1&&i1<=n&&j1<=n&&a[i1][j1]==1&&b[i1][j1]==false){
			b[i1][j1]=true;
            if(l==0) s+="D";
            else if(l==1){
            	s+="L";
			}
			else if(l==2){
            	s+="R";
			}
            else if(l==3) s+="U";
			loang(i1,j1,s);
			b[i1][j1]=false;
			s.pop_back();
		}
	}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        check=false;
        memset(b,false,sizeof(b));
        for(int j=1;j<=n;j++){
            for(int i=1;i<=n;i++){
                cin>>a[i][j];
            }
        }
        if(a[1][1]==0) {
            cout<<"-1"<<endl;
            ve.clear();
            continue;
        }
        b[1][1]=true;
        loang(1,1,"");
        if(!check) cout<<"-1";
        else{
            for(int i=0;i<ve.size();i++){
                cout<<ve[i]<<" ";
            }
        }
        ve.clear();
        cout<<endl;

    }
}

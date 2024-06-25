#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,vs[100],s=0;
bool visited[10001];
int ans;
void Try(int s,int cnt,int trc){
	if(cnt==k&&trc==n+1){
	//	cout<<"cong"<<endl;
		ans+=1;
		return;
	}
	int cs=0;
	for(int j=trc;j<=n;j++){
		cs+=a[j];
		if(cs==s){
		//	cout<<j<<endl;
			Try(s,cnt+1,j+1);
		}
	}
}

void iput(){
	s=0;
	ans=0;
	cin>>n>>k;
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s+=a[i];
	}
	if (s%k!=0) {
		cout<<"0\n";
		return;	
	}
	s=s/k;
//	cout<<s<<endl;
	Try(s,0,1);
	cout<<ans<<endl;
}
int main(){
	iput();	 	

}


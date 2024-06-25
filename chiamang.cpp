#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,vs[100],s=0;
bool visited[10001];
int ans;
void Try(int sum,int cnt){
	if(cnt==k){
		ans=1;
		return;
	}
	if(ans) return;
	for(int j=1;j<=n;j++){
		if(!visited[j]){
			visited[j]=true;
			if(sum==s){
				Try(0,cnt+1);
			}
			else if(sum+a[j]<=s){
				Try(sum+a[j],cnt);
			}
		}
		visited[j]=false;
		
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
	Try(0,0);
	cout<<ans<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		iput();
		
	} 
	

}


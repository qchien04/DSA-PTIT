#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n,s,m,ans;
		cin>>n>>s>>m;
		int songaymua=s-(s/7);
		int need=m*s;
		if(6*n<7*m) cout<<"-1"<<endl;
		else{
			if(m*s%n==0) ans=m*s/n;
			else ans=m*s/n+1;
			cout<<ans<<endl;
		}
	}

}


#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		bool check=true;
		int x=0;
		int ans=INT_MAX;
		int tmp;
		for(int i=0;i<n;i++){
			if(a[i]%k==0 && check) {
				x=i;
				tmp=a[i];
				check=false;
			}
			else if(a[i]%k!=0){
				if(a[i]==k) {
					ans=1;
					break;
				}
				check=true;
				if(tmp==k) ans=min(ans,i-x);
				x=0;
				tmp=0;
			}
			if(a[i]%k==0)
			tmp=__gcd(a[i],tmp);
		}
		if(ans==1) {
			cout<<ans<<endl;
			continue;
		}
		if(tmp==k) ans=min(ans,n-x);
		if(ans==0) cout<<-1<<endl;
		else cout<<ans<<endl;
	}
}

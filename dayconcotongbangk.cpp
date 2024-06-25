#include <bits/stdc++.h>
using namespace std;
int a[100];
int ans[100];
int n,k;
bool ok;
void tohop(int i,int pos,int sum){
	for(int j=pos;j<=n;j++){
		ans[i]=a[j];
		sum+=a[j];
		if(sum==k){
			ok=true;
			cout<<"[";
			for(int k=1;k<=i;k++){
				cout<<ans[k];
				if(k!=i)cout<<" ";
			}
			cout<<"] ";
		}
		else{
			tohop(i+1,j+1,sum);
		}
		sum-=a[j];
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ok=false;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		tohop(1,1,0);
		if(!ok) cout<<"-1";
		cout<<endl;
	}
	
}

#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,s,ok=0;
long long money[100];
void tohopdq(int m){
	if(ok) return;
	if(m>k){
		long long sum=0;
		for(int i=1;i<=k;i++){
			sum+=money[a[i]];
		}
		if(sum==s){
			ok=1;
		}
		return;
	}
	for (int i = a[m-1] + 1; i <= n-k+m; i++){
	a[m] = i; 
	tohopdq(m+1); 
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>s;
		for(int i=1;i<=n;i++) cin>>money[i];
		sort(money+1,money+n+1);
		for(int i=1;i<=n;i++){
			k=i;
			tohopdq(1);
			if(ok){
				cout<<k<<endl;
				break;
			}
		}
		if(ok==0) cout<<"-1"<<endl;
		ok=0;
	}

}


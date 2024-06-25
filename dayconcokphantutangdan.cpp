#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,b[100];

void tohopdq(int m){
	if(m>k){
		for(int i=1;i<=k;i++){
			cout<<b[a[i]]<<" ";
		}
		cout<<endl;
		return;
	}
	for (int i = a[m-1] + 1; i <= n-k+m; i++){
	a[m] = i; 
	tohopdq(m+1); 
	}
}
void khoitao(){
	tohopdq(1);
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>b[i];
		sort(b+1,b+1+n);
		khoitao();

	}

}


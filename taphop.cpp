#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,s,vs[100];
int dem=0;
void tohopdq(int m){
	if(m>k){
		int sum=0;
		for(int i=1;i<=k;i++){
			sum+=a[i];
		}
		if(sum==s) dem++;
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
	while(1){
		cin>>n>>k>>s;
		if(n==0&&k==0&&s==0) break;
		a[0]=0;
		//for(int i=1;i<=n;i++) a[i]=i;
		khoitao();
		cout<<dem<<endl;
		dem=0;
		
	}

}


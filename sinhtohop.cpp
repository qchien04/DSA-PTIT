#include<bits/stdc++.h>
using namespace std;
void tohopdq(int m,int a[],int n,int k){
	if(m>k){
		for(int i=1;i<=k;i++){
			cout<<a[i];
		}
		cout<<" ";
		return;
	}
	for (int i = a[m-1] + 1; i <= n-k+m; i++){
	a[m] = i; 
	tohopdq(m+1,a,n,k); 
	}
}
void khoitao(int a[],int n,int k){
	tohopdq(1,a,n,k);
}
int main(){
	int t;cin>>t;
	while(t--){
		int a[100],n,k;
		a[0]=0;
		cin>>n>>k;
		khoitao(a,n,k);
		cout<<endl;
		
	}

}


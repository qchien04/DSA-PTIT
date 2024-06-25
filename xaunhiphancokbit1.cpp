#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n,int k){
	long long sum=0;
	for(int i=1;i<=n;i++){
		if(a[i]) sum++;
	}
	return sum==k;
}
void npsinh(int a[],int n,int k){
	for(int i=1;i<=n;i++) a[i]=0;
	while(1){
		if(check(a,n,k)){
			for(int i=1;i<=n;i++){
				 cout<<a[i];
			}
			cout<<endl;	
		}
		int i=n;
		while(i>0&&a[i]==1){
			a[i]=0;
			i--;
		}
		if(i==0) return;
		else a[i]=1;
	}
}

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		npsinh(a,n,k);		
	}
}


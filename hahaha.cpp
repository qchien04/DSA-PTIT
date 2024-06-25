#include<bits/stdc++.h>
using namespace std;
//h=1,a=0;
bool check(int a[],int n){
	long long sum=0;
	for(int i=1;i<n;i++){
		if(a[i]==1&&a[i+1]==1) {
			return false;
		}
	}
	if(a[n]==1) return false;
	if(a[1]==0) return false;
	return true;
}
void npsinh(int a[],int n){
	for(int i=1;i<=n;i++) a[i]=0;
	while(1){
		if(check(a,n)){
			for(int i=1;i<=n;i++){
				if(a[i]) cout<<"H";
				else cout<<"A";
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
		long long n;
		cin>>n;
		int a[n+2];
		npsinh(a,n);		
	}
}


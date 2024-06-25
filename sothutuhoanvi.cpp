#include<bits/stdc++.h>
using namespace std;

int a[100],n,k;
bool check(int b[]){
	for(int i=1;i<=n;i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}
void hvsinh(int a[],int b[],int n){
	for(int i=1;i<=n;i++) a[i]=i;
	int dem=1;
	while(dem++){
		if(check(b)){
			cout<<dem-1<<endl;
			break;	
		}
		int i=n-1;
		while(i>0&&a[i]>a[i+1]){
			i--;
		}
		if(i==0) return;
		k=n;
		while(a[i]>a[k]) k--;
		swap(a[i],a[k]);
		int l=i+1;
		int r=n;
		while(l<r){
			swap(a[r],a[l]);
			r--;
			l++;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		int b[n+1];
		for(int i=1;i<=n;i++) cin>>b[i];
		hvsinh(a,b,n);		
	}
	

}


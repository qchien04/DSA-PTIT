#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,vs[100];
bool check(int b[]){
	for(int i=1;i<=k;i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}
void tohopsinh(int a[],int b[],int n,int k){
	for(int i=1;i<=k;i++) a[i]=i;
	int dem=1;
	while(dem++){
		if(check(b)){
			cout<<dem-1<<endl;
			break;	
		}
		int i=k;
		while(i>0&&a[i]>=n-k+i){
			i--;
		}
		if(i==0) return;
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
	int b[k+1];
	for(int i=1;i<=k;i++) cin>>b[i];
	tohopsinh(a,b,n,k);
		
	}


}


#include<bits/stdc++.h>
using namespace std;

void tohopsinh(int a[],int n,int k){
	for(int i=1;i<=k;i++) cin>>a[i];
	int i=k;
	while(i>1&&a[i]-a[i-1]==1){
		i--;
	}
	if(i==1&&a[i]==1) {
		for(int i=1;i<=k;i++) cout<<n-k+i<<" ";
	}
	else{
		a[i]=a[i]-1;
		for(int j=i+1;j<=k;j++){
			a[j]=n-k+j;
		}
		for(int i=1;i<=k;i++) cout<<a[i]<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		int a[1005];
		cin>>n>>k;
		tohopsinh(a,n,k);
		cout<<endl;
	}
}


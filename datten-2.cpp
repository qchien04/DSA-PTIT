#include<bits/stdc++.h>
using namespace std;

int a[100],n,k;
void tohopsinh(){
	for(int i=1;i<=k;i++) a[i]=i;
	while(1){
		for(int i=1;i<=k;i++) {
			cout<<char('A'+a[i]-1);
		}
		cout<<endl;
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
		tohopsinh();
	}
}



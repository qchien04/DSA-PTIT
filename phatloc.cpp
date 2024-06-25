#include<bits/stdc++.h>
using namespace std;
//8=1,6=0;
int a[100],n,k;
bool check(){
	if(a[1]==0||a[n]==1) return false;
	for(int i=2;i<=n;i++){
		if(a[i]==1&&a[i-1]==1) return false;
		if(i+2<=n){
			if(a[i]==0&&a[i-1]==0&&a[i+1]==0&&a[i+2]==0) return false;		
		}
	}
	return true;
}
void npsinh(){
	for(int i=1;i<=n;i++) a[i]=0;
	while(1){
		if(check()){
			for(int i=1;i<=n;i++) {
				if(a[i]==1) cout<<"8";
				else cout<<"6";
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
	cin>>n;
	npsinh();

}


#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,vs[100];
string s;
void hvdq(int m){
	if(m>n){
		for(int i=1;i<=n;i++){
			cout<<s[a[i]-1];
		}
		cout<<" ";
		return;
	}
	for(int i=1;i<=n;i++){
		if(vs[i]){
			a[m]=i;
			vs[i]=0;
			hvdq(m+1);
			vs[i]=1;
		}
	}
}
void khoitao(){
	for(int i=1;i<=n;i++) vs[i]=1;
	hvdq(1);
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>s;
		n=s.size();
		khoitao();
		cout<<endl;
		
	}
	

}


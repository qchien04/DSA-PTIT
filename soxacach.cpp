#include<bits/stdc++.h>
using namespace std;
int a[100],n,k,vs[100];
bool check(string s){
	for(int i=1;i<s.size();i++){
		if((s[i]-s[i-1])==1||(s[i]-s[i-1])==-1) return false;
	}
	return true;
}
void hvdq(int m){
	if(m>n){
		string s="";
		for(int i=1;i<=n;i++){
			char f='1'+a[i]-1;
			s+=f;
		}
		if(check(s)) cout<<s<<endl;
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
		cin>>n;
		khoitao();	
	}
}


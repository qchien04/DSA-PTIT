#include<bits/stdc++.h>
using namespace std;
int kt[200]={0};
int a[100],n,k,vs[100];
bool check(string s){
	for(int i=1;i<s.size()-1;i++){
		if(kt[s[i]]==1&&kt[s[i-1]]==0&&kt[s[i+1]]==0) return false;
	}
	return true;
}
void hvdq(int m){
	if(m>n){
		string s="";
		for(int i=1;i<=n;i++){
			char f='A'+a[i]-1;
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
	char c;
	cin>>c;
	kt[65]=1;
	kt[69]=1;
	n=c-'A'+1;
	khoitao();

}


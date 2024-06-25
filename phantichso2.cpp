#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,vs[100];
vector<string> res;
void try_(int sum,string s,int headd){
	for(int i=headd;i>=1;i--){
		if(sum==n){
			s.pop_back();
			res.push_back("("+s+")");
			return;
		}
		else if(sum<n){
			try_(sum+i,s+to_string(i)+" ",i);
		}
	}
}
void khoitao(){
	try_(0,"",n);
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		khoitao();
		cout<<res.size()<<endl;
		for(int i=0;i<res.size();i++){
			cout<<res[i]<<" ";
		}
		cout<<endl;
		res.clear();
	}

}

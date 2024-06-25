#include<bits/stdc++.h>
using namespace std;
long long luythua(long long x,long long y,long long p){
	if(y==0) return 1;
	if(y%2==0){
		long long t=luythua(x,y/2,p);
		return (t*t)%p;
	}
	else{
		long long t=luythua(x,y-1,p);
		return (t*x)%p;
	}	
}
int main() {
	int t;cin>>t;
	while(t--){
		long long a,b,m;
		string s;
		cin>>s;
		cin>>b>>m;
		long long tmp=0,res;
		for(int i=0;i<s.size();i++){
			tmp=tmp*10+(s[i]-'0');
			tmp%=m;
		}
		long long kq=luythua(tmp,b,m);
		cout<<kq<<endl;	
	}
}

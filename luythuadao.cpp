#include <bits/stdc++.h>
#define endl "\n"
const int mod=1e9+7;
using namespace std;
long long luythua(long long n,long long k){
	if(k==0) return 1;
	if(k==1) return n%mod;
	if(k%2==1){
		long long t=luythua(n,k-1);
		return (t*n)%mod;
	}
	else {
		long long t=luythua(n,k/2);
		return (t*t)%mod;
	}

}
int main()
{
	int t;cin>>t;
	while(t--){
		long long n;
		string s;
		cin>>s;
		n=stoll(s);
		reverse(s.begin(),s.end());
		long long k=stoll(s);
		cout<<luythua(n,k)<<endl;;
	}
}

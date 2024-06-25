#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<set>
using namespace std;
long long f[100];
string divtos(long long n,long long k){
	if(n==1) return "A";
	if(n==2) return "B";
	if(k<=f[n-2]) return divtos(n-2,k);
	if(k>f[n-2]) return divtos(n-1,k-f[n-2]);
}
int main() {
	f[1]=1;
	f[2]=1;
	for(int i=3;i<94;i++){
		f[i]=f[i-2]+f[i-1];
	}
	int t;cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		cout<<divtos(n,k)<<endl;
	}
}

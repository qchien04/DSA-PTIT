#include <bits/stdc++.h>
#define endl "\n"
const int mod=1e9+7;
using namespace std;
long long luythua(long long n,long long k,long long cnt){
	if(k==1&&n==1) return 1;
	else if(k==(cnt+1)/2) return n;
	else if(k<(cnt+1)/2){
		return luythua(n-1,k,(cnt-1)/2);
	}
	else if(k>(cnt+1)/2){
		return luythua(n-1,k-1-(cnt-1)/2,(cnt-1)/2);
	}

}
int main()
{
	int t;cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		cout<<luythua(n,k,pow(2,n)-1)<<endl;
		
	}
}

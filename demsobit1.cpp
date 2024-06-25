#include <bits/stdc++.h>
using namespace std;
int div(int pos,int n,int latch){
	if(pos%2==1) return 1;// vi tri le luon luon bang 1;
	else if(pos==latch) return n%2;// vi tri ma tai do gia tri n mod2 dat vao
	else if(pos<latch) return div(pos,n/2,latch/2);
	else if(pos>latch) return div(pos-latch,n/2,latch/2); // vung ben trai chot chan mod2
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,r,l;
		cin>>n>>l>>r;
		int n1=n;
		long long latch=1; 
		while(n1/2!=0){
			latch*=2;
			n1/=2;
		}
		long long ans=0;
		for(int i=l;i<=r;i++){
			ans+=div(i,n,latch);
		}
		cout<<ans<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
        int sum=0;
		int n,k;
		cin>>n>>k;
		int a[n];
		bool mangnho=false;
		if(k*2<n) mangnho=true;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+n);
		int s1=0,s2=0;
		for(int i=0;i<k;i++)	s1+=a[i];
		for(int i=0;i<n-k;i++)	s2+=a[i];
		s1=min(s1,s2);
		long long ans=0;
		ans=abs(sum-2*s1);
		cout<<ans<<endl;

	}
}



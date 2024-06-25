#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n,k;cin>>n>>k;
		long long a[n],b[k];
		long long cnt=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<k;i++){
			cin>>b[i];
		}
		sort(b,b+k);
		cout<<a[n-1]*b[0];
		cout<<endl;
		
	}
}



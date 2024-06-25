#include <bits/stdc++.h>

#define endl "\n"
using namespace std;
int solanquayvong(long long a[],int n,long long m){
	int flag;
	for(int i=0;i<n;i++){
		if(a[i]==m) {
			flag=i;
			break;
		}
	}
	if(flag==n-1) return 0;
	else return flag+1;
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		long long a[n];
		long long m=-1,l=INT_MAX;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>m) m=a[i];
			if(a[i]<l) l=a[i];
		}
		if(m==l) cout<<"0"<<endl;
		else{
			int kt=solanquayvong(a,n,m);
			cout<<kt<<endl;
		}
	}
}


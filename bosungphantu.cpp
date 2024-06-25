#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int flag[100005]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
			flag[a[i]]++;
		}
		sort(a,a+n);
		int ans=0;
		int l=a[0]+1,r=a[n-1];
		for(int i=l;i<r;i++){
			if(flag[i]==0) ans++;
		}
		cout<<ans<<endl;
	}

}



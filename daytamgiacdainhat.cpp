#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		int a[n];
		int ans=0;
		for(int i=0;i<n;i++) cin>> a[i];
		for(int i=0;i<n;i++){
			int len=1;
			while(a[i]<a[i+1]&&i<n-1){
				i++;
				len++;
			}
			while(a[i]>a[i+1]&&i<n-1){
				i++;
				len++;
			}
			if(len!=1) i--;
			ans=max(ans,len);
		}
		if(ans==0) cout<<n<<endl;
		else cout<<ans<<endl;
	}

}


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
		int ans=0,res=0;
		map<int,int> mp; 
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
			if(ans<mp[a[i]]){
				res=a[i];
			}
			ans=max(ans,mp[a[i]]);
		}
		if(ans>(n/2)) cout<<res;
		else cout<<"NO";
		cout<<endl;
	}

}


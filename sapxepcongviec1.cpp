#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		pair<int,int> p[n+1];
		for(int i=0;i<n;i++){
			cin>>p[i].second;
		}
		for(int i=0;i<n;i++){
			cin>>p[i].first;
		}
		sort(p,p+n);
		int tmp=p[0].first;
		int ans=1;
		for(int i=1;i<n;i++){
			if(p[i].second>=tmp){
				ans++;
				tmp=p[i].first;
			}
		}
		cout<<ans<<endl;
	}
}

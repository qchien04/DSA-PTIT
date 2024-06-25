#include <bits/stdc++.h>

#define endl "\n"
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.first<b.first;
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		int a[n];
		int x;
		vector<pair<int,int> > ve;
		for(int i=0;i<n;i++){
			cin>>x;
			ve.push_back({x,i});
		}
		sort(ve.begin(),ve.end(),cmp);
		int ans=INT_MIN;
		int last=ve[0].second;
		for(int i=0;i<n;i++){
			if(ve[i].second-last>ans){
				ans=ve[i].second-last;
			};
			last=min(last,ve[i].second);
		}
		if(ans!=0) cout<<ans<<endl;
		else cout<<"-1"<<endl;
	}
}



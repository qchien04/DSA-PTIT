#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector< pair<int,int> > a,b;
		for(int i=0;i<n;i++){
			pair<int, int> tmp; 
			cin>>tmp.first;
			tmp.second=i;
			a.push_back(tmp);
		} 
		for(int i=0;i<m;i++){
			pair<int, int> tmp; 
			cin>>tmp.first;
			tmp.second=i;
			b.push_back(tmp);
		}
		//nhan2bieuthuc
		vector< pair<int,int> > ans;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				pair<int, int> tmp;
				tmp.first= a[i].first*b[j].first;
				tmp.second= a[i].second + b[j].second;
				ans.push_back(tmp);
			}
		}
		for(int i=0;i<n+m-1;i++){
			int sum=0;
			for(int j=0;j<ans.size();j++){
				if(ans[j].second==i) {
					sum+=ans[j].first;
				}
			}
			cout<<sum<<" ";
		}
		cout<<endl;
	}
}



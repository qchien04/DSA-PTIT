#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		int x=n;
		vector<vector<int>> ans;
		ans.push_back(a);
		while(x>1){
			vector<int> tmp(x);
			for(int i=0;i<x-1;i++){
				a[i]=a[i]+a[i+1];
			}
			a.pop_back();
			ans.push_back(a);
			x--;
		}
		for(int i=ans.size()-1;i>=0;i--){
			cout<<"[";
			for(int j=0;j<ans[i].size();j++){
				cout<<ans[i][j];
				if(j!=ans[i].size()-1) cout<<" ";
			}
			cout<<"] ";
		}
		cout<<endl;


	}
	
}

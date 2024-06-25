#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> ans;
		int a;
		char c;
		cin>>a;
		ans.push_back(a);
		cin>>a;
		ans.push_back(a);
		cin>>c;
		n--;
		while(n--){
			int x;
			cin>>a;
			cin>>x;
			cin>>c;
			ans.push_back(x);	
		} 
		sort(ans.begin(),ans.end());
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}

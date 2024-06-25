#include<bits/stdc++.h>

using namespace std;

bool issymbol(string s){
	if(s=="+"||s=="-"||s=="*"||s=="/") return 1;
	else return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<string> q;
		q.push("6");
		q.push("8");
		vector<string> ans;
		while(q.size()){
			string tmp=q.front();
			q.pop();
			string nguoc=tmp;
			reverse(nguoc.begin(),nguoc.end());
			ans.push_back(tmp+nguoc);
			if(ans.size()==n) break;
			q.push(tmp+"6");
			q.push(tmp+"8");
		}
		for(auto x:ans){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}


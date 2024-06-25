#include <bits/stdc++.h>
using namespace std;
set<string> se;
int ans;
bool check(string s){
	if(s.size()<2) return false;
	stack<char> st;
	for(int i=0;i<s.size();i++){
		if(s[i]=='(') st.push(s[i]);
		if(s[i]==')'){
			if(st.empty()) return false;
			else st.pop();
		}
	}
	if(st.empty()) return 1;
	else return 0;
}
void solve(string s,int pos,int xoa){
	for(int i=pos+1;i<s.size();i++){
		if(s[i]=='('||s[i]==')'){
			string tmp=s;
			tmp.erase(tmp.begin()+i,tmp.begin()+i+1);
			if(check(tmp)){
				if(xoa<ans){
					ans=xoa;
					se.clear();
					se.insert(tmp);
				}
				else if(xoa==ans){
					se.insert(tmp);
				}
			}
			if(ans>=xoa+1) solve(tmp,i-1,xoa+1);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    ans=INT_MAX;
        se.clear();
		string s;
		cin>>s;
		solve(s,-1,1);
		if(check(s)){
			cout<<s<<endl;
			continue;
		}
		if(se.size()==0) cout<<"-1";
		else{
			for(auto ss:se){
				cout<<ss<<" ";
			}
		}
		cout<<endl;
	}
}


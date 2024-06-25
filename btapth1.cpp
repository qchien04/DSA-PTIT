#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<pair<int,int> > ve;
		stack<int> st;
		st.push(-1);
		for(int i=0;i<s.size();i++){
			if(s[i]==')'){
				int s1=st.top();
				st.pop();
				if(!st.empty()){
					int s2=i;
					ve.push_back({s1,s2});
				}
				else st.push(i);
			}
			else if(s[i]=='('){
				st.push(i);
			}
		}
		for(auto x:ve){
			s[x.first]='0';
			s[x.second]='1';
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='('||s[i]==')'){
				cout<<"-1";
			}
			else cout<<s[i];
		}
		cout<<endl;
	}
	
	
	return 0;
}

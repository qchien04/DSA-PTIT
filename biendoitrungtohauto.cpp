#include <bits/stdc++.h>
using namespace std;
bool isletter(char c){
	if(c<='Z'&&c>='A') return true;
	if(c<='z'&&c>='a') return true;
	return false;
}
bool issymbol(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^') return true;
	return false;
}
int priority(char x){
	if(x=='+'||x=='-') return 1;
	if(x=='*'||x=='/') return 2;
	else return 3;
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s;
		cin>>s;
		stack<char> st;
		string ans;
		for(int i=0;i<s.length();i++){
			if(s[i]=='(') st.push(s[i]);
			else if(isletter(s[i])) ans+=s[i];
			else if(issymbol(s[i])){
					while((!st.empty())&&st.top()!='('&&priority(s[i])<=priority(st.top())){
						ans+=st.top();
						st.pop();
					}
					st.push(s[i]);
			}
			else if(s[i]==')'){
				while(st.top()!='('){
					ans+=st.top();
					st.pop();
				}
				st.pop();
			}
		}
		while((!st.empty())&&st.top()!='('){
			ans+=st.top();
			st.pop();
		}
		cout<<ans<<endl;
	}
}

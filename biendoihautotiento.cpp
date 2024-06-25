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
		stack<string> st;
		string ans;
		for(int i=0; i<s.size();i++){
			if(isletter(s[i])) st.push(string(1,s[i]));
			else{
				string tmp;
				string a=st.top();
				st.pop();
				string b=st.top();
				st.pop();
				tmp='('+b+s[i]+a+')';
				st.push(tmp);				 
			}
		}
		s=st.top();
		stack<char> st1;
		ans="";
		for(int i=s.size()-1; i>=0;i--){
			if(s[i]==')') st1.push(s[i]);
			else if(isletter(s[i])) ans+=s[i];
			else if(issymbol(s[i])){
				st1.push(s[i]);		
			}
			else if(s[i]=='('){
				while(st1.top()!=')'){
					ans+=st1.top();
					st1.pop();
				}
				st1.pop();
			}
		}
		reverse(ans.begin(), ans.end());
		cout<<ans<<endl;
	}
}




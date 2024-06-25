#include<bits/stdc++.h>

using namespace std;
bool isletter(char c){
	if(c<='Z'&&c>='A') return true;
	if(c<='z'&&c>='a') return true;
	return false;
}
int main(){
	string s;
	cin>>s;
	stack<char> st,tmp;
	//string tmp;
	for(int i=0;i<s.size();i++){
		if(s[i]=='-'){
			if(!st.empty()) st.pop();
		}
		else if(s[i]=='<'){
			if(!st.empty()){
				char a=st.top();
				st.pop();
				tmp.push(a);	
			}
		}
		else if(s[i]=='>'){
			if(!tmp.empty()){
				char a=tmp.top();
				tmp.pop();
				st.push(a);
			}
		}
		else st.push(s[i]);
	}
	while(!tmp.empty()){
		char a=tmp.top();
		tmp.pop();
		st.push(a);
	}
	string res;;
	while(st.size()){
		res+=string(1,st.top());
		st.pop();
	}
	for(int i=res.size()-1;i>=0;i--){
		cout<<res[i];
	}
	
	
	
	
	
} 

#include <bits/stdc++.h>
using namespace std;
string bieuthuc(string s){
	stack<char> st;
	for(int i=0;i<s.size();i++){
		if(s[i]==')'){
			bool check=false;
			while(st.top()!='('){
				char tmp=st.top();
				if(tmp=='+'||tmp=='-'||tmp=='/'||tmp=='*') check=true;
				st.pop();
			}
			st.pop();
			if(!check) return "Yes"; 
		}
		else{
			st.push(s[i]);
		}
	}
	return "No";
}
int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		string res=bieuthuc(s);
		cout<<res<<endl;
	}
    return 0;
}



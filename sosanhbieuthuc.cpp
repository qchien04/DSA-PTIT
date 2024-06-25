#include <bits/stdc++.h>
using namespace std;

string rs(string s){
	stack<char> st;
	string ans;
	for(int j=0;j<s.size();j++){
		if(s[j]==')'){
			string ins;
			while(st.size()&&st.top()!='(')	{
				ins=st.top()+ins;
				st.pop();
			}
			st.pop();
//			cout<<"mang trong "<<ins<<endl;
//			cout<<"dau truoc mang "<<st.top()<<endl;
			if(st.size()&&st.top()=='-'){
				for(int i=0;i<ins.size();i++){
					if(ins[i]=='-') ins[i]='+';	
					else if(ins[i]=='+') ins[i]='-';	
				}
			}
			for(int i=0;i<ins.size();i++){
				st.push(ins[i]);
			}
		}
		else{
			st.push(s[j]);
		}
	}
	while(st.size()){
		ans=st.top()+ans;
		st.pop();
	}
	return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		string res1=rs(s1);
		string res2=rs(s2);
		if(res1==res2){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
    return 0;
}




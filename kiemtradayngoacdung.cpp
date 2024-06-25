	#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		stack<char> st;
		string s;
		cin>>s;
		bool check=true;
		for(int i=0;i<s.size();i++){
			if(s[i]=='{'||s[i]=='('||s[i]=='['){
				st.push(s[i]);
			}
			else{
				if(st.empty()){
					check=false;
					break;
				}
				else{
					if(s[i]==')'&&st.top()=='('&&st.size()>0) st.pop();
					else if(s[i]==']'&&st.top()=='['&&st.size()>0) st.pop();
					else if(s[i]=='}'&&st.top()=='{'&&st.size()>0) st.pop();
					else{
						check=false;
						break;
					}
					
				}
			}
		}
		if (check) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
    return 0;
}




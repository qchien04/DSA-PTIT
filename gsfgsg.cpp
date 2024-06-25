#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    if(a.size()!=b.size()) return a.size()<b.size();
    else return a<b;
}
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
    int t;
    cin >> t;
    while (t--) {
    	string s;
    	cin>>s;
    	stack<int> st;
    	int ans=9;
    	st.push(9);
    	for(int i=0;i<s.size();i++){
    		ans--;
    		if(s[i]=='D') {
				while(!st.empty()){
					cout<<st.top();
					st.pop();
				}
			}
			st.push(ans);
		}
		while(!st.empty()){
			cout<<st.top();
			st.pop();
		}
		while(1){
		}
		cout<<endl;
    }
}

#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int chu(char x){
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z')) return 1;
	else return 0;
}
int dau(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/') return 1;
	else return 0;
}
int po(char x){
	if(x=='*'||x=='/') return 1;
	else return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
		cin>>s;
		stack<string> st;
		string out;
		for(int i=s.size()-1;i>=0;i--){
			if(dau(s[i])) {
				string tmp=st.top();
				tmp="("+tmp;
				st.pop();
				tmp+=s[i];
				tmp+=st.top()+")";
				st.pop();
				st.push(tmp);
			}
			else{
				st.push(string(1,s[i]));
			}
		}
		s=st.top();
		cout<<s<<endl;
		stack<string> stt;
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				stt.push(string(1,s[i]));
			}
			else if(chu(s[i])){
				out+=s[i];
			}
			else if(dau(s[i])) {
				stt.push(string(1,s[i]));
			}
			else if(s[i]==')'){
				out+=stt.top();
				stt.pop();
				stt.pop();
			}
		}
		if(!stt.empty()){
			out+=stt.top();
			stt.pop();
		}
		cout<<out<<endl;
		
    }
}

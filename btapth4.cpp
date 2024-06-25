#include<bits/stdc++.h>

using namespace std;

bool issymbol(string s){
	if(s=="+"||s=="-"||s=="*"||s=="/") return 1;
	else return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> s;
		for(int i=0;i<n;i++){
			string x;
			cin>>x;
			s.push_back(x);
		}
		stack<long long> st;
		if(issymbol(s[0])){
			for(int i=n-1;i>=0;i--){
				if(issymbol(s[i])){
					long long a=st.top();
					st.pop();
					long long b=st.top();
					st.pop();
					if(s[i]=="+") st.push(a+b);
					if(s[i]=="-") st.push(a-b);
					if(s[i]=="*") st.push(a*b);
					if(s[i]=="/") st.push(a/b);
				}
				else st.push(stoll(s[i]));
			}
			cout<<st.top()<<endl;
		}
		else{
			for(int i=0;i<n;i++){
				if(issymbol(s[i])){
					long long a=st.top();
					st.pop();
					long long b=st.top();
					st.pop();
					if(s[i]=="+") st.push(a+b);
					if(s[i]=="-") st.push(b-a);
					if(s[i]=="*") st.push(a*b);
					if(s[i]=="/") st.push(b/a);
				}
				else st.push(stoll(s[i]));
			}
			cout<<st.top()<<endl;
		}
		
	}
	return 0;
}

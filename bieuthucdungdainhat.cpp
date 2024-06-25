#include <bits/stdc++.h>
using namespace std;

int demngoac(string s){
	stack<int> st;
	int dem=0,i=0;
	int ans=0;
	for(int j=i;j<s.size();j++){
		if(s[j]==')'){
			if(!st.empty()){
				st.pop();
				ans+=2;
			}
		//	else st.clear();	
		}
		else{
			st.push(j);
		}
	}
	return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int res=demngoac(s);
		cout<<res<<endl;
	}
    return 0;
}




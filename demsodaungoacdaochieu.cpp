#include <bits/stdc++.h>
using namespace std;

int demngoac(string s){
	stack<char> st;
	int dem=0,i=0;
	while(s[i]==')'){
		dem++;
		i++;
	}
	for(int j=i;j<s.size();j++){
		if(s[j]==')'){
			if(st.empty()) dem++;
			else st.pop();
		}
		else{
			st.push(s[j]);
		}
	}
	while(!st.empty()&&st.top()==')'){
		st.pop();
		dem++;
	}
	if(dem%2==0){
		return (dem+st.size())/2;
	}
	else return (dem+st.size())/2+1;
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



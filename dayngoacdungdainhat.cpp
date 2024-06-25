#include <bits/stdc++.h>
using namespace std;

int demngoac(string s){
	stack<int> st;
	st.push(-1);
	int dem=0,i=0;
	int ans=0;
	for(int j=i;j<s.size();j++){
		if(s[j]==')'){
			st.pop();
			if(!st.empty())
				ans=max(ans,j-st.top());
			else st.push(j);	
		}
		else{
			st.push(j);
		}
	}
	return ans;
}
int demngoac2(string s){
	stack<char> st;
	int dem=0,i=0;
	int ans=0;
	for(int j=i;j<s.size();j++){
		if(s[j]==')'){
			if(st.empty()){
				dem=0;	
			}
			else {
				st.pop();
				dem+=2;
				ans=max(dem,ans);
			}
		}
		else{
			st.push(s[j]);
		}
	}
	return ans;
}
//int main() {
//	int t;
//	cin>>t;
//	while(t--){
//		string s;
//		cin>>s;
//		int res=demngoac(s);
//		cout<<res<<endl;
//	}
//    return 0;
//}
int main() {
	while(1){
		string s="";
		for(int i=0;i<8;i++){
			int x=rand()%2;
			if(x) s+=")";
			else s+="(";
		}
		int res=demngoac(s);
		int res2=demngoac2(s);
		if(res!=res2){
			cout<<"sai roi"<<endl;
			cout<<s<<endl;
			cout<<res<<" "<<res2<<endl;
			break;
		}
	}
    return 0;
}



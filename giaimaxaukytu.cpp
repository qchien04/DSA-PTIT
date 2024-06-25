#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
    	string s;
    	stack<char> st;
    	cin>> s;
    	for(int i=0;i<s.size();i++){
    		if(s[i]==']'){
    			string tmp;
    			while(st.size()&&st.top()!='['){
    				tmp=st.top()+tmp;
    				st.pop();
				}
				st.pop();
				string ti;
			//	cout<<"chuoi con "<<tmp<<endl;
				while(st.size()&&isdigit(st.top())){
					ti=st.top()+ti;
					st.pop();
				}
			//	cout<<"so lap "<<ti<<endl;
				int lap=1;
				if(ti.size())lap=stoi(ti);
				string m;
				for(int j=0;j<lap;j++) m+=tmp;
				for(int j=0;j<m.size();j++){
                    st.push(m[j]);
				}
			}
			else {
				st.push(s[i]);
			//	cout<<"day "<<s[i]<<endl;
			}
		}
		string res;
	//	cout<<"lap xong"<<endl;
		while(st.size()){
            res=st.top()+res;
            st.pop();
		}
		cout<<res<<endl;
    }

    return 0;
}

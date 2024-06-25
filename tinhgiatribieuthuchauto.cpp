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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
		cin>>s;
		stack<int> st;
		stack<string> ttu;
		for(int i=0;i<s.size();i++){
			if(dau(s[i])) {
				int tmp1=st.top();
				st.pop();
				int tmp2=st.top();
				st.pop();
				int tmp;
				if(s[i]=='+'){
					tmp=tmp2+tmp1;
				}
				if(s[i]=='-'){
					tmp=tmp2-tmp1;
				}
				if(s[i]=='*'){
					tmp=tmp2*tmp1;
				}
				if(s[i]=='/'){
					tmp=tmp2/tmp1;
				}
				st.push(tmp);
			}
			else{
				st.push(s[i]-'0');
			}
		}
		cout<<st.top()<<endl;
    }
}


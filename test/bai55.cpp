#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=INT_MIN;
        vector<pair<int,int> > ve;
        stack<int> st;
        st.push(-1);
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                int cso1=st.top();
                st.pop();
                if(!st.empty()){
                    int cso2=i;
                    ans=max(ans,i-st.top());
                    ve.push_back({cso1,cso2});
                }
                else st.push(i);
            }
            else if(s[i]=='(') st.push(i);
        }
        for(int i=0;i<ve.size();i++){
            s[ve[i].first]='0';
            s[ve[i].second]='1';
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]==')'){
                cout<<-1;
            }
            else cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}


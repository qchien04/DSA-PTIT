#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> ans;
        queue <string> q;
        q.push("4");
        q.push("5");
        while(q.size()){
            string tmp=q.front();
            q.pop();
            string nguoc=tmp;
            reverse(nguoc.begin(),nguoc.end());
            ans.push_back(tmp+nguoc);
            if(ans.size()==n) break;
            q.push(tmp+"4");
            q.push(tmp+"5");
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


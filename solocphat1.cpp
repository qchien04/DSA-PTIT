#include <bits/stdc++.h>
using namespace std;
long long const mod=1e9+7;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	vector<string> ans;	
        queue<string> q;
        q.push("6");
        q.push("8");
        int n;
        cin>>n;
        int n1=n;
        ans.push_back("6");
        ans.push_back("8");
        while(q.size()){
        	string s=q.front();
        	if(s.size()==n){
        		break;
			}
        	q.pop();
        	ans.push_back(s+"6");
        	ans.push_back(s+"8");	
        	q.push(s+"6");
        	q.push(s+"8");
		}
		for(int i=ans.size()-1;i>=0;i--){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
long long const mod=1e9+7;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	vector<string> ans;
    	
        queue<string> q;
     //   q.push(0);
        q.push("1");
        int n;
        cin>>n;
        int n1=n;
        ans.push_back("1");
        while(n1--){
        	string s=q.front();
        	q.pop();
        	ans.push_back(s+"0");
        	ans.push_back(s+"1");	
        	q.push(s+"0");
        	q.push(s+"1");
		}
		for(int i=0;i<n;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
    }
    return 0;
}


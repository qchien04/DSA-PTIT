#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		stack<int> st;
		int b[n+1];
		map<int,int> mp;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		for(int i=n-1;i>=0;i--){
			while(!st.empty()&&mp[a[i]]>=mp[a[st.top()]]){
				st.pop();
			}
			if(st.empty()) b[i]=-1;
			else{
				b[i]=st.top();
			}
			st.push(i);
		}
		for(int i=0;i<n;i++){
			if(b[i]==-1) cout<<"-1"<<" ";
			else cout<<a[b[i]]<<" ";
		}
		cout<<endl;
	}
    return 0;
}

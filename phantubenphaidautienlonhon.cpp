#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		stack<int> st;
		vector<int> b(n,-1);

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			while(!st.empty()&&a[i]>a[st.top()]){
				b[st.top()]=i;
				st.pop();
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




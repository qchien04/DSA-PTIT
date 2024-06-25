#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		int q;
		cin>>n>>q;
		stack<int> st;
		vector<int> b(n,0);

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=n-1;i>=0;i--){
			while(!st.empty()&&a[i]>=a[st.top()]){
				st.pop();
			}
			b[i]=st.size();
			st.push(i);
		}
		while(q--){
			int x;
			cin>>x;
			cout<<b[x-1]<<endl;
		}
	}
    return 0;
}




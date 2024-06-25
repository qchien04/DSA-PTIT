#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[n+1],c[n+1];
		stack<int> st;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=n-1;i>=0;i--){
			while(!st.empty()&&a[st.top()]<=a[i]){
				st.pop();
			}
			if(st.empty()) b[i]=-1;
			else b[i]=st.top();
			st.push(i);
		}
		stack<int> st2;
		for(int i=n-1;i>=0;i--){
			while(!st2.empty()&&a[st2.top()]>=a[i]){
				st2.pop();
			}
			if(st2.empty()) c[i]=-1;
			else c[i]=st2.top();
			st2.push(i);
		}
		for(int i=0;i<n;i++){
			if(b[i]==-1||c[b[i]]==-1){
				cout<<-1<<" ";
			}
			else {
				cout<<a[c[b[i]]]<<" ";
			}
		}
		cout<<endl;
	}
    return 0;
}




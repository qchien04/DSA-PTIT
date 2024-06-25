#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,m;
	cin>>n>>m;
	long long a[n+1],b[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		while(st.size()&&a[i]>=a[st.top()]) st.pop();
		if(st.empty()){
			b[i]=0;
		}
		else b[i]=st.size();
		st.push(i);
	}
	for(int i=0;i<m;i++){
		int q;
		cin>>q;
		cout<<b[q-1]<<endl;
	}
	return 0;
}

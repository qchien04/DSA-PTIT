#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,m;
	cin>>m>>n;
	long long a[n+1],b[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=m-a[i];
	}
	long long ans=INT_MIN;
	stack<long long> st,st2;
	for(int i=0;i<n;i++){
		while(!st.empty()&&a[i]<a[st.top()]){
			long long c=a[st.top()];
			st.pop();
			long long w=0;
			if(st.empty()){
				w=i;
			}
			else w=i-st.top()-1;
			ans=max(ans,w*c);
		}
		st.push(i);
		while(!st2.empty()&&b[i]<b[st2.top()]){
			long long c=b[st2.top()];
			st2.pop();
			long long w=0;
			if(st2.empty()){
				w=i;
			}
			else w=i-st2.top()-1;
			ans=max(ans,w*c);
		}
		st2.push(i);
	}
	while(st.size()){
		long long c=a[st.top()];
		st.pop();
		long long w=0;
		if(st.empty()) w=n;
		else w=n-st.top()-1;
		ans=max(ans,w*c);
	}
	while(st2.size()){
		long long c=b[st2.top()];
		st2.pop();
		long long w=0;
		if(st2.empty()) w=n;
		else w=n-st2.top()-1;
		ans=max(ans,w*c);
	}
	cout<<ans<<endl;
	return 0;
}

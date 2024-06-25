#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,q;
	cin>>n>>q;
	int a[n+2];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	stack<int> st;
    int R[n], i;
    for (i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[i] >= st.top()) st.pop();
        if (st.empty()) R[i] = 0;
        else R[i] = st.size();
        st.push(a[i]);
    }
    while(q--){
    	int x;
    	cin>>x;
    	cout<<R[x-1]<<endl;
	}
}



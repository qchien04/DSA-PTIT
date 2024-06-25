#include<bits/stdc++.h>
using namespace std;
void xuly1(int a[], int n) {
    stack<int> st;
    int R[n], i;
    for (i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[i] >= st.top()) st.pop();
        if (st.empty()) R[i] = -1;
        else R[i] = st.top();
        st.push(a[i]);
    }
    for (i = 0; i < n; i++) 
        cout << R[i] << " ";
    cout << endl;
}
void xuly(int a[],int n){
	stack<int> st;
	int r[n+1];
	for(int i=n-1;i>=0;i--){
		while(!st.empty()&&a[i]>st.top()){
			st.pop();
		}
		if(st.empty()) r[i]=-1;
		else r[i]=st.top();
		st.push(a[i]);
	}
	for (int i = 0; i < n; i++) 
        cout << r[i] << " ";
    cout << endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+2];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		xuly(a,n);
	}
}



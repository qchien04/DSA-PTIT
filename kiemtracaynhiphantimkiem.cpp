#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		cin>>n;
		int a[n+1];
		bool check=true;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=1;i<n;i++){
			if(a[i]<=a[i-1]){
				check=false;
			}
		}
		if(check) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}


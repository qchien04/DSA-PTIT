#include <bits/stdc++.h>
using namespace std;
int a[100];
int n,k;
vector<string> s;
void tohop(int m){
    if(m>k){
		for(int i=1;i<=k;i++){
			cout<<s[a[i]-1]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=a[m-1]+1;i<=n-k+m;i++){
		a[m]=i;
		tohop(m+1);
	}
}
int main() {
	cin>>n>>k;
	set<string> se;
	for(int i=0;i<n;i++) {
		string x;
		cin>>x;
		se.insert(x);
	}
	for(auto x:se){
		s.push_back(x);
	}
	n=s.size();
	a[0]=0;
	tohop(1);

}

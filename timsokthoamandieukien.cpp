#include<iostream>
#include<string>
using namespace std;
int solve(string s) {
	int a[100] = {0};
	for (int i=0;i<s.length();i++) {
		if (s[i]-48>5) return 0;
		a[s[i]]++;
	}
	for (int i=0;i<100;i++)
		if (a[i]>1) return 0;
	return 1;
}
int main() {
	int t; cin>>t;
	while (t--) {
		int a,b; 
		cin>>a>>b;
		int cnt=0;
		for (int i=a;i<=b;i++) {
			if (solve(to_string(i))) cnt++;
		}
		cout<<cnt<<endl;
	}
}

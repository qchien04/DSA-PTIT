#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		multiset<int> se;
		for(int i=0;i<n;i++) cin>> a[i];
		for(int i=0;i<k;i++) se.insert(a[i]);
		cout<<*se.rbegin()<<" ";
		for(int i=k;i<n;i++){
			se.insert(a[i]);
			se.erase(se.find(a[i - k]));
			cout<<*se.rbegin()<<" ";
		}
		cout<<endl;
	}

}

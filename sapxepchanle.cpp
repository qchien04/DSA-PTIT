#include <bits/stdc++.h>

#define endl "\n"
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main()
{
	int n,k;
	cin>>n;
	int a[n+2];
	vector<int> v1,v2;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(i%2==1) v1.push_back(a[i]);
		else v2.insert(v2.begin(),a[i]);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end(),cmp);
	for(int i=1;i<=n/2;i++){
		cout<<v1[i-1]<<" ";
		cout<<v2[i-1]<<" ";
	}
	if(n%2==1) cout<<*v1.rbegin();

}


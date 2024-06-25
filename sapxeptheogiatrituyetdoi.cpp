#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n,x;
    	cin>>n>>x;
    	int a[n];
    	pair<int,int> p[n];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		p[i].first=abs(a[i]-x);
    		p[i].second=i;
		}
		sort(p,p+n);
		for(int i=0;i<n;i++){
    		cout<<a[p[i].second]<<" ";
		}
		cout<<endl;
	}
}


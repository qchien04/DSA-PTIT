#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		long long a[n];
		int check=0;
		map<long long,long long> mp; 
		long long res;
		for(int i=0;i<n;i++) cin>> a[i];
		for(int i=0;i<n;i++){
			mp[a[i]]++;
		}
		for(int i=0;i<n;i++){
			if(mp[a[i]]>1) {
				res=a[i];
				check=1;
				break;
			}
		}
		if(check) cout<<res;
		else cout<<"NO";
		cout<<endl;
	}

}


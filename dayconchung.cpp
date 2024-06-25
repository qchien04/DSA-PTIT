#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n+1],b[m+1],c[k+1];
		map<int,int> m1,m2,m3;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m1[a[i]]++;
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			m2[b[i]]++;
		}
		for(int i=0;i<k;i++){
			cin>>c[i];
			m3[c[i]]++;
		}
		int check=true;
		for(auto x:m1){
			int it=x.first;
			int minn=min(m1[it],min(m2[it],m3[it]));
			if(minn>0){
				for(int j=0;j<minn;j++){
					cout<<x.first<<" ";
				}
				check=false;
			}
		}
		if(check) cout<<"NO";
		cout<<endl;
	}
}

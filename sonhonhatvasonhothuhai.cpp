#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n;
		int a[n];
		set<int> se;
		int ans=-1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			se.insert(a[i]);
		}
		int j=0;
		sort(a,a+n);
		if(a[0]==a[n-1]) cout<<"-1"<<endl;
		else{
			for(set<int>::iterator it = se.begin(); it != se.end(); ++it){
				if(j==2){
					cout<<endl;
					break;
				}
				cout<<*it<<" ";
				j++;
			}
		}
		
	}

}


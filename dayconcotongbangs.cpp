#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--){
		int n,s;
		cin >> n >> s;
		int a[n+1];
		int l[s+5];
		l[0]=1;
		for(int i = 1 ; i <= s ; i++) l[i] = 0;
		for(int i=0 ; i < n; i++ ){
			cin >> a[i];
		} 
		sort(a, a + n);
		for(int i = 0; i < n ; i++){
			for(int t = s; t>= a[i] ;t--){
				if(l[t - a[i]] == 1){
					l[t] =1;
				}
			}
		}
		if(l[s] == 1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

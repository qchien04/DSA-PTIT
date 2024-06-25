#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--){
		string s;
		cin >> s;
		int ans=1;
		int n = s.size();
		bool a[n+2][n+2];
		for(int i = 0; i < n ; i ++){
			for(int j = 0; j < n ; j ++){
				a[i][j]=false;
			}
		} 
		for(int i = 0; i < n ; i ++){
			a[i][i]=true;
		}
		for(int k = 1; k <= n - 1 ;k++){
			for(int i = 0; i < n - k; i++){
				int j = i + k;
				a[i][j]=(i + 1 > j - 1 || a[i+1][j-1]) && (s[i]==s[j]);
				if(a[i][j]){
					ans=max(ans,j-i+1);
				}
			}
		}
		cout<<ans<<endl;
	}
}




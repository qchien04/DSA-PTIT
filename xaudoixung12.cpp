#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--){
		string s;
		cin >> s;
		int ans=0;
		int n = s.size();
		int a[n+2][n+2];
		for(int i = 0; i < n ; i ++){
			for(int j = 0; j < n ; j ++){
				a[i][j]=0;
			}
		} 
		for(int i = 0; i < n ; i ++){
			a[i][i]=1;
		}
		for(int k = 1; k <= n - 1 ;k++){
			for(int i = 0; i < n - k; i++){
				int j = i + k;
				if(s[i]==s[j]) { 
					a[i][j] = a[i + 1][j - 1] + 2;
				}
				else{
					a[i][j]=max(a[i+1][j],a[i][j-1]);
				}
			}
		}
		cout<<n-a[0][n-1]<<endl;
	}
}


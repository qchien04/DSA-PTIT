#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string n,m;
		cin>>n>>m;
		int a[102][102];
		for(int i=0;i<=n.size();i++){
			for(int j=0;j<=m.size();j++){
				if(i==0||j==0) a[i][j]=i+j;//so ki tu khac nhau max co the co tai moi day ki tu
				else if(n[i-1]==m[j-1]){
					a[i][j]=a[i-1][j-1];
				}
				else {
					a[i][j]=min(a[i-1][j-1],min(a[i-1][j],a[i][j-1]))+1;
				}
			}
		}
		cout<<a[n.size()][m.size()]<<endl;
	}
    return 0;
}



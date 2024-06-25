#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
	cin >> n >> m;
	int a[n+1][m+1];
	for(int i=0; i< n; i++){
		for(int j=0 ;j< m; j++){
			cin>>a[i][j];
		}
	}
	int b[n+2][m+2];
	b[0][0]=a[0][0];
	for(int i= 1; i<m ;i++){
		b[0][i]=a[0][i]+b[0][i-1];
	}
	for(int i= 1; i< n ;i++){
		for(int j = 0 ;j < m; j++){
			if(j==0){
				b[i][j]=a[i][j]+b[i-1][j];
			}
			else{
				b[i][j]=a[i][j]+max(b[i-1][j],b[i][j-1]);
			}
		}
	}
	cout<<b[n-1][m-1]<<endl;
}


#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,m;
        cin>>n>>m;
        long long a[n+1][m+1];
        for(int i=0;i<=m;i++){
        	a[0][i]=1;
		}
		for(int i=0;i<=n;i++){
        	a[i][0]=1;
		}
		for(long long i=1;i<=n;i++){
        	for(long long j=1;j<=m;j++){
        		a[i][j]=a[i-1][j]+a[i][j-1];
			}
		}
//		for(int i=1;i<=n;i++){
//        	for(int j=1;j<=m;j++){
//        		cout<<a[i][j]<<"  ";
//			}
//			cout<<endl;
//		}
		cout<<a[n][m]<<endl;
    }
}

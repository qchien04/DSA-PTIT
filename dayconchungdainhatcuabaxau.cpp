#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b, c;
        int n, m, h;
        cin>> n >> m >> h;
        cin >> a >> b >> c;
        int dem[n+2][m+2][h+2];
        int ans=-1;
        for(int i=0;i<=n;i++){
        	dem[i][0][0]=0;
		}
		for(int i=0;i<=m;i++){
        	dem[0][i][0]=0;
		}
		for(int i=0;i<=h;i++){
        	dem[0][0][i]=0;
		}
		for(int i=0;i<=a.size();i++){
        	for(int j=0;j<=b.size();j++){
        		for(int k=0;k<=c.size();k++){
        			dem[i][j][k]=0;
				}
			}
		}
        for(int i=0;i<a.size();i++){
        	for(int j=0;j<b.size();j++){
        		for(int k=0;k<c.size();k++){
        			if(a[i]==b[j]&&b[j]==c[k]) {
	        			dem[i+1][j+1][k+1]=dem[i][j][k]+1;
					}
					else dem[i+1][j+1][k+1]=max(max(dem[i+1][j+1][k],dem[i+1][j][k+1]),dem[i][j+1][k+1]);
					ans=max(ans,dem[i+1][j+1][k+1]);
				}
			}
		}
        cout << ans << endl;
    }
}



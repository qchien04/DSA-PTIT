#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n=a.size()+1;
        int m=b.size()+1;
        int dem[n][m];
        int ans=-1;
        for(int i=0;i<=a.size();i++){
        	dem[i][0]=0;
		}
		for(int i=0;i<=b.size();i++){
        	dem[0][i]=0;
		}
        for(int i=0;i<a.size();i++){
        	for(int j=0;j<b.size();j++){
        		if(a[i]==b[j]) {
        			dem[i+1][j+1]=dem[i][j]+1;
				}
				else dem[i+1][j+1]=max(dem[i][j+1],dem[i+1][j]);
				ans=max(ans,dem[i+1][j+1]);
			}
		}
        cout << ans << endl;
    }
}


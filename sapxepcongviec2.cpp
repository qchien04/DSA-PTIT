#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long long const mod=1e9+7;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.first>b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int id,dl,pr;
        int n;
        cin>>n;
        bool visit[1001];
        pair<int,int> p[n];
        for(int i=0;i<n;i++){
        	cin>>id>>dl>>pr;
        	p[i].first=pr;
        	p[i].second=dl;
		}
		memset(visit,false,sizeof(visit));
		sort(p,p+n,cmp);
		int ans=0,dem=0;
		for(int i=0;i<n;i++){
			for(int j=p[i].second-1;j>=0;j--){
				if(!visit[j]){
					ans+=p[i].first;
					visit[j]=true;
					dem++;
					break;
				}
			}
		}
		cout<<dem<<" "<<ans<<endl;
    }
}



#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<pair<int,int> > a(n);
    	int res=INT_MIN;
    	for(int i=0;i<n;i++){
    		cin>>a[i].first>>a[i].second;
		}
		sort(a.begin(),a.end());
		int b[102];
		for (int i = 0; i < n; i++){
            b[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (a[i].first > a[j].second && b[i] <= b[j]) b[i] = b[j] + 1;
            }
            res = max(res, b[i]);
    	}
    	cout<<res<<endl;
	}
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		string s;
		map<char,int> mp;
		cin>>s;
		int dem=0;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
			dem=max(dem,mp[s[i]]);
		}
		dem=dem-(s.size()-dem);
		if(dem>1) cout<<"-1"<<endl;
		else cout<<"1"<<endl;
	}

}


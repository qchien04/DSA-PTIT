#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		string s;
		int k;
		map<char,int> mp;
		cin>>k>>s;
		int dem=0;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
			dem=max(dem,mp[s[i]]);
		}
		if(((dem-1)*k+1)>s.size()) cout<<"-1"<<endl;
		else cout<<"1"<<endl;
	}

}


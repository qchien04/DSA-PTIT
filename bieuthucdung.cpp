#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		stack<int> st;
		string s;
		cin>>s;
		int a=0,b=0;
		int ans=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='[') a++;
			if(s[i]==']') b++;
			if(b>a){
				for(int j=i+1;j<s.size();j++){
					if(s[i]!=s[j]){
						ans+=j-i;
						a++;
						swap(s[i],s[j]);
						i++;
						break;	
					}
				}
			}
		}
		cout<<ans<<endl;
	}
}



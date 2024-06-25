#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a=-1;
		for(int i=0;i<s.size();i++){
			if(s[i]=='0') a=i;
		}
		if(a<0){
			for(int i=0;i<s.size();i++) cout<<'0';
		}
		else{
			s[a]='1';
			for(int i=a+1;i<s.size();i++) s[i]='0';
			cout<<s;
		}

		cout<<endl;
	}
}


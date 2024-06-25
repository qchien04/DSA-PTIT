#include<bits/stdc++.h>
using namespace std;
void solg(string s,int so[]){
	for(int i=0;i<s.size();i++){
		int j=s[i]-'0';
		so[j]++;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		string s;
		cin>>n;
		int a[n];
		int so[10]={0};
		for(int i=0;i<n;i++){
			cin>>s;
			solg(s,so);
		}
		for(int i=0;i<10;i++){
			if(so[i]!=0) cout<<i<<" ";
		}
		cout<<endl;		
	}
}
 


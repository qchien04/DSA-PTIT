#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	string s1,s2;
	int nho=0;
	cin>>s1>>s2;
	int i1=s1.size();
	int j1=s2.size();
	int dai=max(i1,j1);
	while(s1.size()<dai) s1="0"+s1;
	while(s2.size()<dai) s2="0"+s2;
	string kq(dai,'0');
	if(s2>s1) swap(s1,s2);
	for(int i=dai-1;i>=0;i--){
		int k= (s1[i]-'0') - (s2[i]-'0') - nho;
		if(k>=0){
			kq[i]=k+'0';
			nho=0;
		}
		else{
			k=10+s1[i] - s2[i] - nho;
			kq[i]=k+'0';
			nho=1;
		}
	}
	cout<<kq<<endl;
	}
}






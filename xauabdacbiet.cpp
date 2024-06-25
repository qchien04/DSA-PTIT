#include<bits/stdc++.h>
using namespace std;
//0=A,  1=B
int a[100],n,k;
bool check(string s, int k)
{
    int count = 1;
	int ok = 0;
	for(int i=1;i<s.size();i++) {
		if (s[i - 1] == 'A' && s[i] == 'A')count++;
		else count = 1;
		if (count > k)return false;
		if (count == k)ok++;
	}
	if (ok == 1)return true;
	else return false;
}
vector<string> ve;
void lkie(int i,string s){
	if(i==n){
		if(check(s,k)){
			ve.push_back(s);	
		}
		
		return;
	}
	for(int j=0;j<=1;j++){
		lkie(i+1,s+char(j+'A'));
	}
}
void khoitao(){
	lkie(0,"");
}
int main(){
		ve.clear();
		cin>>n>>k;
		khoitao();
		cout<<ve.size()<<endl;
		for(int i=0;i<ve.size();i++){
			cout<<ve[i]<<endl;
		}
		cout<<endl;
}


#include<bits/stdc++.h>

using namespace std;
string s;
int n,k;
int a[100];
map<string,int> mp;
set<string> se;
void quaylui(int m){
    if(m>k){
        string d;
        for(int j=1;j<=k;j++){
            d+=string(1,s[a[j]-1]);
        }
        se.insert(d);
        return;
    }
	for(int i=a[m-1]+1;i<=s.size()-k+m;i++){
		a[m]=i;
		quaylui(m+1);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
        se.clear();
		cin>>s>>k;
		a[0]=0;
		quaylui(1);
		for(auto x:se){
            cout<<x<<endl;
		}

	}
}


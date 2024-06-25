#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,vs[100];
vector<string> ve;
void tohopsinh(int a[],int n,int k,string s){
	for(int i=1;i<=k;i++) a[i]=i;
	while(1){
		string s1;
		for(int i=1;i<=k;i++){
			s1+=s[a[i]-1];
		}
		ve.push_back(s1);
		int i=k;
		while(i>0&&a[i]>=n-k+i){
			i--;
		}
		if(i==0) return;
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		string s;
		cin>>s;
		ve.clear();
		for(int i=1;i<=n;i++){
			k=i;
		    tohopsinh(a,n,k,s);		
		}
		sort(ve.begin(),ve.end());
		for(int i=0;i<ve.size();i++){
			cout<<ve[i]<<" ";
		}
		cout<<endl;
	}
	

}


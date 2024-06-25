#include<bits/stdc++.h>
using namespace std;

int a[100],n,k;
int ans=INT_MAX;
void hvsinh(vector<string> s){
	for(int i=1;i<=k;i++) a[i]=i;
	while(1){
		int maxx=INT_MIN;
		int minn=INT_MAX;
		for(auto ss:s){
			string tmp;
			for(int i=0;i<k;i++){
				tmp+=ss[a[i+1]-1];
			}
			//cout<<tmp<<endl;
			minn=min(stoi(tmp),minn);
			maxx=max(stoi(tmp),maxx);
		}
		//cout<<"het"<<endl;
		ans=min(ans,maxx-minn);
		int i=k-1;
		while(i>0&&a[i]>a[i+1]){
			i--;
		}
		if(i==0) return;
		int k1=k;
		while(a[i]>a[k1]) k1--;
		swap(a[i],a[k1]);
		int l=i+1;
		int r=k;
		while(l<r){
			swap(a[r],a[l]);
			r--;
			l++;
		}
	}
}
int main(){
	cin>>n>>k;
	vector<string> s(n);
	for(int i=0;i<n;i++) cin>>s[i];
	hvsinh(s);
	cout<<ans<<endl;

}



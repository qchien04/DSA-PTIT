#include <bits/stdc++.h>
using namespace std;
int UCLN(int a,int b){
	if(b==0) return a;
	return UCLN(b,a%b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	bool check=true;
	int x=0;
	int ans=100000;
	int tmp;
	for(int i=0;i<n;i++){
		if(a[i]%k==0 && check) x=i,tmp=a[i],check=false;
		else if(a[i]%k!=0){
			check=true;
			if(tmp==k) ans=min(ans,i-x);
			x=0;
			tmp=0;
		}
		if(a[i]%k==0)
		tmp=UCLN(a[i],tmp);
	}
	if(tmp==k) ans=min(ans,n-x);
	if(ans==100000) cout<<-1<<endl;
	else cout<<ans<<endl;
	}
}
//3
//
//8 3
//
//6 9 7 10 12 24 36 27 ====2
//
//4 3
//
//2 4 6 8 ===-1
//
//4 6
//
//1 2 3 6 ===1

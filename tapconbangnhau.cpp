#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<set>
using namespace std;
int n,s;
int a[100];
int vs[100];
bool check;
void quaylui(int i,int sum){
	if(check) return;
	for(int j=i+1;j<=n;j++){
		if(!vs[j]){
			sum+=a[j];
			vs[j]=1;
			if(sum==s){
				check=true;
				return;
			}
			if(sum<s){
				quaylui(j,sum);
			}
			vs[j]=0;
			sum-=a[j];
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		check=false;
		int sum=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			sum+=a[i];
			vs[i]=0;
		}
		if(sum%2==1){
			cout<<"NO"<<endl;
		}
		else{
			s=sum/2;
			quaylui(0,0);
			if(check) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}

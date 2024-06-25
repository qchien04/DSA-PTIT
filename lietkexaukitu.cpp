#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,vs[100];

void Try(int i){
	for(int j=a[i-1];j<=n;j++){
		a[i]=j;
		if(i==k){
			for(int l=1;l<=k;l++){
				cout<<char('A'+a[l]-1);
			}
			cout<<endl;
			//return;
		}
		else Try(i+1);
	}
}
void khoitao(){
	Try(1);
}
int main(){
	char a1;
	cin>>a1>>k;
	n=a1-'A';
	n++;
	a[0]=1;
//	cout<<n<<endl;
	khoitao();
	

}


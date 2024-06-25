#include<bits/stdc++.h>
using namespace std;

int a[100],n,k;
void tohopsinh(vector <string> ve){
	for(int i=1;i<=k;i++) a[i]=i;
	while(1){
		for(int i=1;i<=k;i++) cout<<ve[a[i]-1]<<" ";
		cout<<endl;
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
	cin>>n>>k;
	vector <string> ve;
	set <string> se;
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		se.insert(x);
	}
	n=se.size();
	for(string x: se){
		ve.push_back(x);
	}
	tohopsinh(ve);

}



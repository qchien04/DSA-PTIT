#include <bits/stdc++.h>
using namespace std;
long long const mod=1e9+7;
int a[100],n,k,cnt,ok=1;
void next(){
	int i=cnt;
	while(i>=1&&a[i]==1){
		i--;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]--;
		int thieu=cnt-i+1;
		int x=thieu/a[i];
		int y=thieu%a[i];
		cnt=i;
		for(int j=1;j<=x;j++){
			a[cnt+1]=a[i];
			cnt++;
		}
		if(y){
			a[cnt+1]=y;
			cnt++;
		}
	}
}
void khoitao(){
	cnt=1;
	a[1]=n;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin>>n;
        khoitao();
        string s;
        ok=1;
        while(ok){
        	cout<<"(";
        	for(int i=1;i<cnt;i++){
        		cout<<a[i]<<" ";
			}
			cout<<a[cnt]<<") ";
			next();
		}
		cout<<endl;
    }
    return 0;
}


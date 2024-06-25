#include <bits/stdc++.h>

using namespace std;
struct data{
	int a,b,c;
};
bool cmp1(data a,data b){
	if(a.a==b.a) return a.b<b.b;
	return a.a<b.a;
}
bool cmp2(data a,data b){
	return a.b<b.b;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+2];
		data d[n+2];
		for(int i=0;i<n;i++){
			cin>>d[i].a;
			d[i].b=i;
		}
		sort(d,d+n,cmp1);
		for(int i=0;i<n;i++){
			d[i].c=i+1;
		}
		int dem=0;
		sort(d,d+n,cmp2);
		int maxx=0;
		for(int i=0;i<n-1;i++){
			maxx=max(maxx,d[i].c);
			if(maxx==i+1){
				dem++;
			}
		}
		maxx=0;
		cout<<dem<<endl;
		for(int i=0;i<n-1;i++){
			maxx=max(maxx,d[i].c);
			if(maxx==i+1){
				cout<<i+1<<" ";
			}
		}
		cout<<endl;
	}
    return 0;
}

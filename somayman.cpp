#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long long const mod=1e9+7;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.first>b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool check=false;
        cin>>n;
        int max7=n/7;
        int so4,so7;
        for(int i=max7;i>=0;i--){
        	if((n-i*7)%4==0){
        		so7=i;
        		so4=(n-i*7)/4;
        		check=true;
			}
			if(check) break;
		}
		if(check){
			for(int i=0;i<so4;i++) cout<<"4";
			for(int i=0;i<so7;i++) cout<<"7";
		}
		else cout<<"-1";
		cout<<endl;
    }
}



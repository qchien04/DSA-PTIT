#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
int a[100];
int b[100];
int n;
int vs[100];
void hoanvi(int m,int cnt,string s){
	for(int i=m+1;i<=n;i++){
		if(b[i]>b[m]){
		 //   s+=to_string(b[i])+" ";
           // cout<<"chuoi "<<s<<endl;
			if(cnt>=1){
               // cout<<"nap chuoi"<<s+to_string(b[i])+" "<<endl;
				ans.push_back(s+to_string(b[i])+" ");
			}
			hoanvi(i,cnt+1,s+to_string(b[i])+" ");
		}
	}

}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		vs[i]=1;
	}
	b[0]=0;
	hoanvi(0,0,"");
	sort(ans.begin(),ans.end());
	//cout<<"dap an"<<endl;
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
}

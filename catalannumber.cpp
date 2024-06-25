#include<bits/stdc++.h>
using namespace std;
string ans[105];
string sum(string a,string b){
	int n=a.size();
	int m=b.size();
	int i=n-1;int j=m-1;
	int re=0;
	string res;
	while(i>=0&&j>=0){
		int num1=a[i]-48;
		int num2=b[j]-48;
		int last=(num1+num2+re)%10;
		if(num1+num2+re>9) re=1;
		else re=0;
		res=to_string(last)+res;
		i--;
		j--;
	}
	while(i>=0){
		int num1=a[i]-48;
		int last=(num1+re)%10;
		if(num1+re>9) re=1;
		else re=0;
		res=to_string(last)+res;
		i--;
	}
	while(j>=0){
		int num1=b[j]-48;
		int last=(num1+re)%10;
		if(num1+re>9) re=1;
		else re=0;
		res=to_string(last)+res;
		j--;
	}
	if(re>0){
        res=to_string(1)+res;
	}
	return res;
}
string time1(string a,string b){
	int n=a.size();
	int m=b.size();
	int i=n-1;int j=m-1;
	int re=0;
	string res;
	for(int k=i;k>=0;k--){
	    re=0;
		string s="";
		for(int l=j;l>=0;l--){
			int num1=a[k]-48;
			int num2=b[l]-48;
			int last=(num1*num2+re)%10;
			if(num1*num2+re>9) re=(num1*num2+re)/10;
			else re=0;
			s=to_string(last)+s;
		}
		if(re>0) s=to_string(re)+s;
		for(int h=0;h<i-k;h++){
			s=s+"0";
		}
		res=sum(res,s);
	}
	return res;
}
int main() {
	ans[0]="1";
	ans[1]="1";
	ans[2]="2";
	ans[3]="5";
	ans[4]="14";
	for(int i=5;i<103;i++){
		int l=0,r=i-1;
		ans[i]="";
		while(l<r){
			ans[i]=sum(ans[i],time1(ans[l],ans[r]));
			l++;
			r--;
		}
		if(l==r) {
            ans[i]=sum(time1(ans[i],"2"),time1(ans[l],ans[r]));
        }
		else {
            ans[i]=time1(ans[i],"2");
		}
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<ans[n]<<endl;

	}
}



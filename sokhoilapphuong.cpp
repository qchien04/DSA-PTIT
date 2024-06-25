#include<bits/stdc++.h>
using namespace std;
bool xuli(long long lp,string s){
	string tmp=to_string(lp);
	int i=0,j=0;
	while(i<tmp.size()&&j<s.size()){
		if(tmp[i]==s[j]){
			i++;
			j++;
		}
		else j++;
		
	}
	if(i==tmp.size()){
		return true;
	}
	return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	bool ok=true;
    	for(int i=1000;i>=1;i--){
    		long long  lp=i*i*i;
    		if(xuli(lp,s)){
    			cout<<lp<<endl;
    			ok=false;
    			break;
			}	
		}
		if(ok) cout<<-1<<endl;
	}
}



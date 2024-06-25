#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s,s1;
        cin>>s;
        int dem=0,maxs=0,ex=0;
        s1+=s[0];
        int k=2;
        s1+=s[1];
        for(int i=2;i<s.size();i++){
        	s1+=s[i];
        	if(s1.size()>=3&&s1[s1.size()-2]=='0'&&s1[s1.size()-3]=='1'&&s1[s1.size()-1]=='0'){
        		s1.pop_back();
        		s1.pop_back();
        		s1.pop_back();
				if(k-ex!=1){
					dem=3;
				}
				else{
					dem+=3;
				}
				ex=k-2;	
				k=k-3;
				maxs=max(maxs,dem);
			}
			k++;
		}
		cout<<maxs<<endl;
    }

    return 0;
}


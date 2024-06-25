#include<bits/stdc++.h>
using namespace std;
int dem=0;
vector <string> ve;
bool check(string s){
	if(s[0]=='0'&&s[1]=='0') return false;
	if(s[4]=='0'||s[2]=='2'||s[3]=='0') return false;
	return true;
}
void ngaydacbiet(string s){
	if(s.size()==8){
		if(check(s)){
			ve.push_back(s);
		}
		return;
	}
	for(int i=0;i<=2;i=i+2){
		s=s+to_string(i);
		ngaydacbiet(s);
		s.pop_back();
	}
}
int main(){
	ngaydacbiet("");
	for(int i=0;i<ve.size();i++){
		ve[i].insert(2,"/");
		ve[i].insert(5,"/");
		cout<<ve[i]<<endl;
	}


}

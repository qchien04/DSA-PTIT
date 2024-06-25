#include<bits/stdc++.h>

using namespace std;
string chuanhoa(string s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	return s;
}

int main(){
    string ou[1000];
    int i=0;
	string s,kq;
	while(getline(cin,s)){
		stringstream ss(s);
		string a;
		while(ss>>a){
			kq=kq+a;
			kq+=" ";

		}
	}
	cout<<kq<<endl;
	kq.pop_back();
	int dau=0;;
    for(int j=0;j<kq.size();j++){
        if(kq[j]=='.'||kq[j]=='?'||kq[j]=='!'){
            ou[i]=kq.substr(dau,j-dau);
            ou[i]=chuanhoa(ou[i]);
            while(ou[i][ou[i].size()-1]==' ') ou[i].pop_back();
            dau=j+2;
            i++;
        }
    }
    cout<<i<<endl;
    if(i>0) for(int j=0;j<i;j++){
        cout<<ou[j]<<endl;
    }
    else cout<<chuanhoa(kq);
}


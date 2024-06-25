#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
   	cin.ignore();
    vector<vector<int> > ds;
    for(int i=0;i<n;i++){
    	string s;
    	getline(cin,s);
    	int num;
    	stringstream ss(s);
    	vector<int> ke;
    	while(ss>>num){
    		if(num>i+1) ke.push_back(num);
		}
		ds.push_back(ke);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<ds[i].size();j++){
			cout<<i+1<<" "<<ds[i][j]<<endl;
		}
	}

}



#include<iostream>
#include<string>
#include<stdbool.h>
using namespace std;
typedef long long int ll;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int k; cin >> k;
		int count = 0;
		for(int i=0;i<=s.size()-k;i++){
			int m[1000]={0};
			int kt=0;
			for(int j=i;j<s.size();j++){
				if(m[s[j]]==0){
					m[s[j]]++;
					kt++;
				}
				if(kt==k) {
					count++;
				}
			}
		} 
		cout << count << endl;
	}
}

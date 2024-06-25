#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> p;
int main() {
	int t; cin >> t;
	while (t--) {
		int n,k;
		cin >> n>>k;
		map<int, int> mp;
		queue<p> X;
		X.push({n,0});
		mp[n]++;
		while (X.size()) {
			p b = X.front();
			mp[b.first]++;
			X.pop();
			if ((b.first*2==k)||b.first-1 == k) {
				cout << b.second+1 << endl;
				break;
			}
			if(mp[b.first * 2]==0&&b.first <=k) X.push({ b.first * 2 ,b.second + 1 });
			if(mp[b.first - 1]==0&&b.first >=1) X.push({ b.first - 1,b.second + 1 });
		} 
	}
}


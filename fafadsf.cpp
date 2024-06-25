#include<bits/stdc++.h>
using namespace std;
void phavonglap(int i){
	switch (i)
	{
	case 10: cout<<1<<endl;
	case 20: cout<<2<<endl;
	case 30: cout<<3<<endl;
	case 40: cout<<4<<endl;
	}
}
int main() {
	int a;
	vector<int> v;
	while(cin>>a){
		v.push_back(a);
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}



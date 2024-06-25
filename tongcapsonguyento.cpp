#include<bits/stdc++.h>
using namespace std;
int prime(int n){
	if(n==1||n==0) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
bool pri[1000000];
void sang(){
    for(int i = 0; i <= 1000000;++i) {
        pri[i] = true;
    }
    pri[0] = false;
    pri[1] = false;
    for(int i = 2; i * i <= 1000000; ++i) {
         if(pri[i] == true) {
             for(int j = i * i; j <= 1000000; j += i)
                 pri[j] = false;
        }
    }
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		sang();
		int check=0;
		for(int i=0;i<=n/2;i++){
			if(pri[i]&&pri[n-i]){
				check=1;
				cout<<i<<" "<<n-i<<endl;
				break;
			}
		}
		if(check==0) cout<<"-1"<<endl;
	}

}


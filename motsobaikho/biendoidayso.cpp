#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
} 
long long bcnn(long long a,long long b){
	return a*b/ucln(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
	cin>>n;
	vector <int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
//	cout<<"done"<<endl;
	int dem=0;
	int i=0;
	int j=n-1;
	while(1){
		if(a[i]==a[j]) {
			i++;
			j--;		
		}
		else if(a[i]>a[j]){
			a[j-1]+=a[j];
			dem++;	
			j--;
		}
		else if(a[i]<a[j]){
			a[i+1]+=a[i];
			i++;
			dem++;	
		}
	//	cout<<i<<" "<<j<<endl;
		if(i>=j) break;
	}
	cout<<dem<<endl;
		
	}
	
}






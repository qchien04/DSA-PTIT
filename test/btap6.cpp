#include<bits/stdc++.h>

using namespace std;

typedef struct{
	int i;
	int j;
	int cnt;
}number;
int n,m;
int a[1005][1005];
bool check[1001][1001];

int solve(){
	queue<number> q;
	q.push({0,0,0});
	while(q.size()){
		number x=q.front();
	//	cout<<x.i<<" "<<x.j<<" "<<x.cnt<<endl;
		q.pop();
		if(x.i==n-1&&x.j==m-1) return x.cnt;
		int i=x.i,j=x.j;
		if(j<m-1){
			int l=abs(a[i][j+1]-a[i][j]);
			if(i==n-1&&l+j==m-1) return x.cnt+1;
		//	cout<<"push1"<<j+l<<endl;
			if(i>=0&&i<n&&j+l>=0&&j+l<m&&l!=0&&check[i][j+l]){
				q.push({i,j+l,x.cnt+1});
		//		cout<<"push1"<<endl;
				check[i][j+l]=false;
			}
		}
		if(i<n-1){
			int l=abs(a[i+1][j]-a[i][j]);
			if(i+l==n-1&&j==m-1) return x.cnt+1;
		//	cout<<"push2"<<i+l<<endl;
			if(i+l>=0&&i+l<n&&j<m&&j>=0&&l!=0&&check[i+l][j]){
				q.push({i+l,j,x.cnt+1});
		//		cout<<"push2"<<endl;
				check[i+l][j]=false;
			}
		}
		if(i<n-1&&j<m-1){
			int l=abs(a[i+1][j+1]-a[i][j]);
		//	cout<<"push3"<<j+l<<" "<<i+l<<endl;
			if(i+l==n-1&&l+j==m-1) return x.cnt+1;
			if(i+l>=0&&i+l<n&&j+l<m&&j+l>=0&&l!=0&&check[i+l][j+l]){
				q.push({i+l,j+l,x.cnt+1});
			//	cout<<"push3"<<endl;
				check[i+l][j+l]=false;
			}
		}
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		n,m;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				check[i][j]=true;
			}
		}
		cout<<solve()<<endl;
		
	}
	return 0;
}


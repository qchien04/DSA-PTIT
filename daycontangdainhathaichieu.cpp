#include <bits/stdc++.h>

using namespace std;
map<int,int> mp[100000];
map<int, int>::iterator p1, p2;
bool comp(int pos,int a,int b){//so sanh toa do a,b voi tung toa do tai chuoi co do dai=pos
	p1=mp[pos].lower_bound(a);
    if(p1==mp[pos].begin()) return 0;
    p1--;
    return p1->second<b;
}
void push(int pos,int a,int b){//day toa do a,b vao trong cum toa do tai chuoi co do dai=pos
    p1=mp[pos].lower_bound(a);
    p2=p1;
    while(p2!=mp[pos].end()&&p2->second>=b) p2++;
    mp[pos].erase(p1,p2);
    mp[pos].insert({a,b});
}
int main() {
    int n;
    cin>>n;
    int res=0;
    push(0,-1,-1);
    for(int i=0;i<n;i++){
    	int a,b;
    	cin>>a>>b;
    	int l=0,r=res;//res=do dai chuoi dai nhat tinh den thoi diem hien tai
    	while(l<=r){// vong lap tim ra vi tri nho nhat co the dat toa do a,b
    		int mid=(r+l)/2;
    		if(comp(mid,a,b)) l=mid+1;
    		else r=mid-1;
		}
        if(l>res) res=l;//neu l>res nghia la toa do nay co ca a va b lon hon toa do lon nhat da tung xuat hien
        push(l,a,b);
	}
    cout<<res<<endl;
    
    return 0;
}

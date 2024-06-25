#include<bits/stdc++.h>

using namespace std;

struct point{
	int x,y;
	point(int _x,int _y) : x(_x),y(_y) {}
};
bool operator==(const point &a,const point &b){
	return a.x==b.x&&a.y==b.y;
}
namespace std{
	template<>
	struct hash<point>{
		size_t operator()(const point &p)const{
			return hash<int>()(p.x)^hash<int>()(p.y);
		}
	};
}
int bfs(const point &start,const point &end,unordered_map<int,unordered_set<int>> &valid_points){
    queue<pair<point,int>> q;
    unordered_set<point> visited;
    q.push({start,0});
    visited.insert(start);
    vector<point> directions{{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}};
    while(!q.empty()){
        auto tmp=q.front();
        point current=tmp.first;
        int distance=tmp.second;
        q.pop();
        if(current==end) return distance;
        for(auto &dir:directions){
            point next(current.x+dir.x,current.y+dir.y);
            if(valid_points.find(next.x)!=valid_points.end()&&valid_points[next.x].find(next.y)!=valid_points[next.x].end()&&visited.find(next)==visited.end()){
                visited.insert(next);
                q.push({next,distance+1});
            }
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int xa,ya,xb,yb,n;
        cin>>xa>>ya>>xb>>yb;
        cin>>n;
        unordered_map<int,unordered_set<int>> valid_points;
        for(int i=0;i<n;i++){
            int x,y1,y2;
            cin>>x>>y1>>y2;
            for(int y=y1;y<=y2;y++){
                valid_points[x].insert(y);
            }
        }
        point start(xa,ya),end(xb,yb);
        cout<<bfs(start,end,valid_points)<<endl;
    }
    getchar();
}


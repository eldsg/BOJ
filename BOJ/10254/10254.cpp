#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

struct point{
	int x, y;
};
point pp[200000];
point p1;
int ccw(point a, point b, point c){
	long long temp = (long long)(b.x-a.x)*(long long)(c.y-a.y)-(long long)(c.x-a.x)*(long long)(b.y-a.y);
	if(temp > 0) return 1;
	else if(temp < 0) return -1;
	else return 0;
}
long long dist(point p1, point p2){
	long long d1 = (long long)(p1.x-p2.x);
	long long d2 = (long long)(p1.y-p2.y);
	return d1*d1 + d2*d2;
}
bool comp(const point &u, const point &v){
	int temp = ccw(p1, u, v);
	if(temp == 0){
		return dist(p1, u) <= dist(p1, v);
	}
	else return temp == 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d %d", &pp[i].x, &pp[i].y);
		}
		p1 = pp[0];
		for(int i = 1; i<n; i++){
			if(pp[i].y < p1.y || (pp[i].y == p1.y && pp[i].x < p1.x)){
				p1 = pp[i];
			}
		}
		sort(pp, pp+n, comp);
		vector<point> s;
		long long ans = 0;
		for(int i = 0; i<n; i++){
			while(s.size() >=2 && ccw(s[s.size()-2], s[s.size()-1], pp[i]) <=0){
				s.pop_back();
			}
			s.push_back(pp[i]);
		}
		int x = 0, y =0;
		for(int i = 0; i<s.size(); i++){
			for(int j = i+1; j<s.size(); j++){
				if(ans < dist(s[i], s[j])){
					ans = dist(s[i],s[j]);
					x = i;
					y = j;
				}
			}
		}
		printf("%d %d %d %d\n", s[x].x, s[x].y, s[y].x, s[y].y);
	}
}

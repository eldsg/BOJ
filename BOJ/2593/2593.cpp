#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > g;
queue<int> que;
int dist[100101];
int p[100101];
int n, m, x, y, s, e;
int main(){
	scanf("%d%d", &n, &m);
	g.resize(100101);
	for(int i = 1; i <= m; i++){
		scanf("%d%d", &x, &y);
		for(int j = x; j <= n; j += y){
			g[j].push_back(100000+i);
			g[100000+i].push_back(j);
		}
	}
	scanf("%d%d", &s, &e);
	fill(p, p+100101, -1);
	fill(dist, dist+100101, 1e9);
	que.push(e);
	dist[e] = 0;
	while(!que.empty()){
		int h = que.front();
		que.pop();
		for(auto i : g[h]){
			if(dist[i] == 1e9){
				dist[i] = dist[h]+1;
				p[i] = h;
				que.push(i);
			}
		}
	}
	printf("%d\n", dist[s]/2);
	for(int i = p[s]; i >= 0; i = p[p[i]]){
		printf("%d\n", i-100000);
	}
}
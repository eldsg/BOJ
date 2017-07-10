#include <bits/stdc++.h>

using namespace std;


int dist[101][10001];
int main(){
	int tc;
	scanf("%d", &tc);
	while(tc--){
		vector<vector<pair<pair<int, int>, int > > > g;
		priority_queue<pair<pair<int, int>, int> > pq;
		int n, m, k;
		scanf("%d%d%d", &n,&m,&k);
		g.resize(n+1);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < 10001; j++){
				dist[i][j] = 1e9;
			}
		}
		dist[0][0] = 0;
		for(int i = 0; i < k; i++){
			int a, b, c, d;
			scanf("%d%d%d%d", &a, &b, &c, &d);
			g[a-1].push_back({{b-1, d}, c});
		}	
		pq.push({{0, 0}, 0});
		while(!pq.empty()){
			int d = -pq.top().first.first;
			int next = pq.top().first.second;
			int cost = pq.top().second;
			pq.pop();
			if(cost > m || dist[next][cost] < d) continue;
			for(auto i : g[next]){
				int t = i.first.first;
				int nd = i.first.second + d;
				int nc = i.second + cost;
				if(nc <= m){
					if(dist[t][nc] > nd){
						dist[t][nc] = nd;
						pq.push({{-nd, t}, nc});
					}
				}
			}
		}
		int ret = 1e9;
		for(int i = 0; i <= 10000; i++){
			if(dist[n-1][i] < ret) ret = dist[n-1][i];
		}
		if(ret == 1e9) puts("Poor KCM");
		else printf("%d\n", ret);
	}
}
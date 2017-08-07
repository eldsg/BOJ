#include <bits/stdc++.h>

using namespace std;

priority_queue<pair<int, int> > pq;
vector<vector<pair<int, int> > > g;
int dist[1001];
int n, m, a, b, c;
int main(){
	scanf("%d%d", &n, &m);
	g.resize(n+1);
	for(int i = 0; i < m; i++){
		scanf("%d%d%d", &a, &b, &c);
		g[a].push_back({b, c});
	}
	for(int i = 0; i <= n; i++) dist[i] = 1e9;
	scanf("%d%d", &a, &b);
	dist[a] = 0;
	pq.push({0, a});
	while(!pq.empty()){
		int c = -pq.top().first;
		int h = pq.top().second;
		pq.pop();
		if(c > dist[h]) continue;
		for(auto i : g[h]){
			int t = i.first;
			int nd = c + i.second;
			if(nd < dist[t]){
				dist[t] = nd;
				pq.push({-nd, t});
			}
		}
	}
	printf("%d\n", dist[b]);
}
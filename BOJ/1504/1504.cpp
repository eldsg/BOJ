#include <bits/stdc++.h>

using namespace std;

priority_queue<pair<long long, int> > pq;
vector<vector<pair<int, int> > > g;
long long dist[888], n, e, u, v, a, b, c;

void sp(int k){
	fill(dist, dist+n+1, 1e13);
	pq.push({0, k});
	dist[k] = 0;
	while(!pq.empty()){
		int nd = -pq.top().first;
		int h = pq.top().second;
		pq.pop();
		if(dist[h] < nd) continue;
		for(auto i : g[h]){
			if(i.second + nd < dist[i.first]){
				dist[i.first] = nd+i.second;
				pq.push({-dist[i.first], i.first});
			}
		}
	}
}

int main(){
	scanf("%d%d", &n, &e);
	g.resize(n+1);
	for(int i = 0; i < e; i++){
		scanf("%d%d%d" , &a, &b, &c);
		g[a].push_back({b, c});
		g[b].push_back({a, c});
	}
	scanf("%d%d", &u, &v);
	sp(1);
	int len1u = dist[u], len1v = dist[v];
	sp(u);
	int lenuv = dist[v], lenue = dist[n];
	sp(v);
	int lenvu = dist[u], lenve = dist[n];
	long long ret = min(1ll*len1u+lenuv+lenve, 1ll*len1v+lenvu+lenue);
	if(ret > 1e13) puts("-1");
	else printf("%lld\n", ret);
}
#include<cstdio>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

priority_queue<pair<int, int> > pq;
vector<vector<pair<int, int> > > dist;
int dist2[10024];
int ret = -1e9;
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	dist.resize(n+2);
	for(int i = 0; i < m; i++){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		dist[a].push_back(make_pair(b, c));
		dist[b].push_back(make_pair(a, c));
	}
	int d, e;
	scanf("%d%d", &d, &e);
	pq.push(make_pair(d, 1e9));
	while(!pq.empty()){
		int cur = pq.top().first;
		int cd = pq.top().second;
		pq.pop();
		if(cur == e){
			ret = max(ret, cd);
			continue;
		}
		int s = dist[cur].size();
		for(int i = 0; i < s; i++){
			int next = dist[cur][i].first;
			int nd = min(dist[cur][i].second, cd);
			if(dist2[next] < nd){
				dist2[next] = nd;
				pq.push(make_pair(next, nd));
			}
		}
	}
	printf("%d\n", ret);
}

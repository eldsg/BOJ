#include<cstdio>
#include<vector>
#include<queue>
#include<cstdlib>
#include<map>
#include<cstring>

#define INF 1e9

using namespace std;

vector<vector<pair<int, int> > >graph;
priority_queue<pair<int, int> > pq;
vector<int> dist;
vector<int> back;
void proc(){
	while(!pq.empty()){
		int c = pq.top().first;
		int h = pq.top().second;
		pq.pop();
		if(c < dist[h]) continue;
		for(int i= 0; i < graph[h].size(); i++){
			int t = graph[h][i].first;
			int nd = dist[h] + graph[h][i].second;
			if(nd > dist[t]){
				dist[t] = nd;
				back[t] = h;
				if(t!=1) pq.push(make_pair(nd, t));
			}
		}
	}	
}
void road(int i){
	if(back[i]==1) {
		printf("1 %d ", i);
		return ;
	}
	road(back[i]);
	printf("%d ", i);
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	graph.resize(a+1);
	dist.resize(a+1);
	back.resize(2*a);
	dist[1] = 0;
	pq.push(make_pair(0, 1));
	for(int i = 1; i <= b; i++){
		int c, d, e;
		scanf("%d %d %d", &c, &d, &e);
		graph[c].push_back(make_pair(d, e));
	}
	proc();
	printf("%d\n", dist[1]);
	road(1);
}


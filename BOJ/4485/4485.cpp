#include<vector>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<queue>
#include<map>

#define INF 1e9
#define mul 1000
using namespace std;

vector<vector<pair<int, int> > >graph;
priority_queue<pair<int, int> > pq;
vector<int> dist;
int mapp[126][126];
int mx[4] = { 0, 0, 1, -1 };
int my[4] = { 1, -1, 0, 0 };

void proc(){
	while(!pq.empty()){
		int c = -pq.top().first;
		int h = pq.top().second;
		pq.pop();
		if(c > dist[h]) continue;
		for(int i= 0; i < graph[h].size(); i++){
			int t = graph[h][i].first;
			int nd = c + graph[h][i].second;
			if(nd < dist[t]){
				dist[t] = nd;
				pq.push(make_pair(-nd, t));
			}
		}
	}	
}

int main(){
	int t, k = 1;
	while(scanf("%d", &t) && t!=0){
		graph.clear();
		dist.clear();
		for(int i = 0; i < t; i++){
			for(int j = 0; j < t; j++){
				scanf("%d", &mapp[i][j]);
			}
		}
		graph.resize((t-1)+(t-1)*mul+1);
		dist.resize(t-1+(t-1)*mul+1, INF);
		for(int i = 0; i < t; i++){
			for(int j = 0; j < t; j++){
				for(int k = 0; k < 4; k++){
					int dx = i + mx[k];
					int dy = j + my[k];
					if(dx < 0 || dy < 0 || dx > t-1 || dy > t-1) continue;
					graph[mul*i+j].push_back(make_pair(mul*dx+dy, mapp[dx][dy]));
				}
			}
		}
		dist[0] = mapp[0][0];
		pq.push(make_pair(-dist[0], 0));
		proc();
		/*
		for(int i = 0; i < t; i++){
			for(int j = 0; j < t; j++){
				printf("%d ", dist[i*1000+j]);
			}
			printf("\n");
		}
		*/
		printf("Problem %d: %d\n", k++, dist[(t-1)+(t-1)*1000]);
	}
}


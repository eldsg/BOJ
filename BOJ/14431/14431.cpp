#include<cstdio>
#include<cmath>
#include<queue>
#include<vector>

using namespace std;

typedef struct TOWN{
	int x, y;
}TOWN;
TOWN town[4444];
vector<int> dist;
bool p[10000000];
void init(){
	p[0] = p[1] = true;
	for(int i = 2; i <= 9999999; i++){
		if(!p[i]){
			for(int j = i+i; j <= 9999999; j+=i){
				p[j] = true;
			}
		}
	}
}
priority_queue<pair<int, int> > pq; 
vector<vector<pair<int, int> > > g;
int check(int i, int j){
	int k = town[i].x - town[j].x;
	int kk = town[i].y - town[j].y;
	int ret = sqrt(k*k + kk*kk);
//	printf("%d\n", ret);
	if(p[ret]) return 0;
	else return ret;
}
int main(){
	init();
	int dx,dy,cx,cy,t;
	scanf("%d%d%d%d%d", &dx, &dy, &cx, &cy, &t);
	town[0].x = dx, town[0].y = dy, town[1].x = cx, town[1].y = cy;
	for(int i = 2; i < t+2; i++){
			scanf("%d %d", &town[i].x, &town[i].y);
	}
	dist.resize(t+10, 1e9);
	g.resize(t+10);
	for(int i = 0; i < t+2; i++){
		for(int j = i+1; j < t+2; j++){
			int di = check(i, j);
			if(di != 0){
				g[i].push_back(make_pair(j, di));
				g[j].push_back(make_pair(i, di));
			}
		}
	}
	dist[0] = 0;
	pq.push(make_pair(0, 0));
	while(!pq.empty()){
		int c = -pq.top().first;
		int h = pq.top().second;
		pq.pop();
		if(c > dist[h]) continue;
		int s = g[h].size();
		for(int i = 0; i < s; i++){
			int t = g[h][i].first;
			int nd = c + g[h][i].second;
			if(nd < dist[t]){
				dist[t] = nd;
				pq.push(make_pair(-nd, t));
			}
		}
	}
	/*
	for(int k = 0; k < t+2; k++){
		for(int i = 0; i < t+2; i++){
			for(int j = 0; j < t+2; j++){
				if(dist[i][j] > dist[i][k] + dist[k][j]){
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}
	*/
	if(dist[1] == 1e9) puts("-1");
	else printf("%d\n", dist[1]);
}

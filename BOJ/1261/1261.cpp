#include <cstdio>
#include <queue>
#include <functional>
#include <algorithm>

using namespace std;

int mx[4] = { 1, 0, -1, 0};
int my[4] = { 0, 1, 0, -1};

priority_queue<pair<int, int> > ret;

int mapp[101][101];
bool visit[101][101];
int dist[101][101];

int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	for(int i = 0; i < y; i++){
		for(int j = 0; j < x; j++){
			scanf("%1d", &mapp[i][j]);
			dist[i][j] = 1e9;
		}
	}
	dist[0][0] = 0;
	ret.push({0, 0});
	for(int i = 0; i < y*x-1; i++){
		int ny, nx, nc;
		do{
			ny = ret.top().second/1000;
			nx = ret.top().second%1000;
			nc = -ret.top().first;
			ret.pop();
		}while(visit[ny][nx]);
		visit[ny][nx] = true;
		for(int i = 0; i < 4; i++){
			int nexty = ny + my[i];
			int nextx = nx + mx[i];
			if(nexty < 0 || nextx < 0 || nexty >= y || nextx >= x || visit[nexty][nextx]) continue;
			if(dist[ny][nx]+mapp[nexty][nextx] < dist[nexty][nextx]){
				dist[nexty][nextx] = dist[ny][nx]+mapp[nexty][nextx];
				ret.push({-dist[nexty][nextx], nexty*1000+nextx});
			}
		}
	}
	printf("%d\n", dist[y-1][x-1]);
}